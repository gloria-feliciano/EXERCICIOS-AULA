#string - texto
[string] $nome = "Eduardo"

#string - idade
[string] $idade = 42

#tipo - número com ponto flutuante (double)
[double] $altura = 1.78

#tipo - verdadeiro ou falso (bool)
[bool] $éInstrutor = $true

#tipo - data e hora (datetime)
[datetime] $dataAtual = Get-Date

#tipo - caractere único (char)
[char] $inicial = 'E'

#montando a frase com todas as variáveis
$mensagem = @" 
Olá, meu nome é $nome ($inicial),
tenho $idade anos, 
minha altura é $altura metros, 
hoje é $($dataAtual.ToShortDateString()),
e é $éinstrutor que eu sou instrutor.
"@

#exibindo a mensagem final
write-output $mensagem