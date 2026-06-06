Add-Type -AssemblyName "System.Windows.Forms"

# Função para exibir caixas de diálogo de entrada
function Show-InputDialog($title, $prompt) {
    $inputBox = New-Object Windows.Forms.Form
    $inputBox.Text = $title
    $inputBox.Width = 300
    $inputBox.Height = 150
    $inputBox.StartPosition = "CenterScreen"

    $label = New-Object Windows.Forms.Label
    $label.Text = $prompt
    $label.Width = 250
    $label.Top = 20
    $label.Left = 20
    $inputBox.Controls.Add($label)

    $textbox = New-Object Windows.Forms.TextBox
    $textbox.Width = 250
    $textbox.Top = 50
    $textbox.Left = 20
    $inputBox.Controls.Add($textbox)

    $button = New-Object Windows.Forms.Button
    $button.Text = "Ok"
    $button.Width = 80
    $button.Top = 80
    $button.Left = 20
    $button.Add_Click({
        $inputBox.Close()
    })
    $inputBox.Controls.Add($button)

    $inputBox.ShowDialog()
    return $textbox.Text
}

# Função para exibir caixa de diálogo de seleção de opções
function Show-SelectionDialog($title, $prompt, $options) {
    $inputBox = New-Object Windows.Forms.Form
    $inputBox.Text = $title
    $inputBox.Width = 300
    $inputBox.Height = 200
    $inputBox.StartPosition = "CenterScreen"

    $label = New-Object Windows.Forms.Label
    $label.Text = $prompt
    $label.Width = 250
    $label.Top = 20
    $label.Left = 20
    $inputBox.Controls.Add($label)

    $listBox = New-Object Windows.Forms.ListBox
    $listBox.Width = 250
    $listBox.Height = 100
    $listBox.Top = 50
    $listBox.Left = 20
    $listBox.SelectionMode = "MultiExtended"
    $listBox.Items.AddRange($options)
    $inputBox.Controls.Add($listBox)

    $button = New-Object Windows.Forms.Button
    $button.Text = "Ok"
    $button.Width = 80
    $button.Top = 160
    $button.Left = 20
    $button.Add_Click({
        $inputBox.Close()
    })
    $inputBox.Controls.Add($button)

    $inputBox.ShowDialog()
    return $listBox.SelectedItems
}

# Cadastro de usuário
$usuario = Show-InputDialog "Cadastro de usuário" "Digite seu nome de usuário:"
$senha = Show-InputDialog "Cadastro de usuário" "Digite sua senha:"
$endereco = Show-InputDialog "Cadastro de endereço" "Digite seu endereço:"
$telefone = Show-InputDialog "Cadastro de telefone" "Digite seu número de telefone:"

# Lista de sabores de pizza disponíveis
$pizzas = @("Calabresa", "Mussarela", "Portuguesa", "Frango com Catupiry", "Marguerita", "Peperoni", "Quatro Queijos", "Vegetariana", "Chocolate", "Napolitana")
$pizzaPreco = 55

# Inicializa o total de pizzas
$totalPizza = 0
$pizzasSelecionadas = @()

# Escolha dos sabores de pizza
$salvarEscolha = Show-SelectionDialog "Escolha as pizzas" "Escolha as pizzas (segure Ctrl para selecionar múltiplas):" $pizzas
foreach ($pizza in $salvarEscolha) {
    $quantidade = Show-InputDialog "Quantidade de pizza" "Quantas pizzas de $pizza você deseja?"
    $quantidade = [int]$quantidade
    $totalPizza += $quantidade * $pizzaPreco
    $pizzasSelecionadas += @($pizza * $quantidade)
}

# Opções de bebidas
$bebidas = @{
    "Nada" = 0
    "Agua" = 8
    "Refrigerante" = 12
    "Suco" = 10
}

# Escolha das bebidas
$bebidasEscolhidas = Show-SelectionDialog "Escolha as bebidas" "Escolha as bebidas:" $bebidas.Keys
$totalBebida = 0
foreach ($bebida in $bebidasEscolhidas) {
    if ($bebidas.ContainsKey($bebida)) {
        $totalBebida += $bebidas[$bebida]
    }
}

# Cálculo do valor final
$totalFinal = $totalPizza + $totalBebida

# Criação do texto do pedido
$message = "Pedido realizado por: $usuario`nEndereço: $endereco`nTelefone: $telefone`nTotal: R$ $totalFinal`n"
$message += "`nPizzas: " + ($pizzasSelecionadas -join ", ") + "`n"

if ($totalBebida -gt 0) {
    $message += "Bebidas: " + ($bebidasEscolhidas -join ", ") + "`n"
} else {
    $message += "Nenhuma bebida selecionada.`n"
}

# Exibe a mensagem no console
[Windows.Forms.MessageBox]::Show($message, "Resumo do Pedido")

# Salva o pedido em um arquivo de texto
$arquivo = "Pedido_$usuario.txt"
$message | Out-File -FilePath $arquivo

[Windows.Forms.MessageBox]::Show("Pedido salvo com sucesso em $arquivo", "Sucesso")