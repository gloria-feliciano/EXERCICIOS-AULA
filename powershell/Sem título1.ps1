Add-Type -AssemblyName Microsoft.VisualBasic

[string]$inputIdade = [Microsoft.VisualBasic.Interaction]::InputBox(
    "Digite sua idade:", "Classificação de Faixa Etária", "18"
)

if (-not [int]::TryParse($inputIdade, [ref]$idade)){
    [System.Windows.Forms.MessageBox]::Show("Valor inválido. Insira um número inteiro", "Erro", 0, 16)
}

if ($idade -lt 12) {7
    [System.Windows.Forms.MessageBox]::Show("Você é uma criança.", "Resultado", 0, 64)
}

elseif ($idade -ge 12 -and $idade -lt 18) {
    [System.Windows.Forms.MessageBox]::Show("Você é um adolescente.", "Resultado", 0, 64)
}

elseif ($idade -ge 18 -and $idade -lt 60) {
    [System.Windows.Forms.MessageBox]::Show("Você é um adulto.", "Resultado", 0, 64)
}

else {
    [System.Windows.Forms.MessageBox]::Show("Você é um idoso.", "Resultado", 0, 64)
}