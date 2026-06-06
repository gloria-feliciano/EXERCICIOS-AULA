#solicita o nome do usuário
$nome = read-host "Digite o seu nome"

#solicita o ano de nascimento
$ano = read-host "Digite o seu ano de nascimento (exemplo: 1990)"
#converte para inteiro
$ano = [int]$ano

#solicita o mes de nascimento
$mes = read-host "Digite o seu mês de nascimento (número de 1 a 12)"
$mes = [int]$mes

#solicida o dia do nascimento
$dia = read-host "Digite o dia do seu nascimento (número de 1 a 31)"
$dia = [int]$dia

#calcula a idade
$hoje = Get-Date
$idade = $hoje.Year - $ano

#ajuda a idade de a pessoa ainda não fez aniversário este ano
if (($hoje.Month -lt $mes) -or (($hoje.Month -eq $mes) -and ($hoje.Day -lt $dia))) {
$idade--
}

#função para determinar o signo
function get-signo {
param (
[int]$dia,
[int]$mes
)

switch ($mes) {
1 {
if ($dia -lt 20) { return "Capricórnio"} else {return "Aquário"}
}
2 {
if ($dia -lt 19) { return "Aquário"} else {return "Peixes"}
}
3 {
if ($dia -lt 21) { return "Peixes"} else {return "Áries"}
}
4 {
if ($dia -lt 20) { return "Áries"} else {return "Touro"}
}
5 {
if ($dia -lt 21) { return "Touro"} else {return "Gêmeos"}
}
6 {
if ($dia -lt 21)  { return "Gêmeos"} else {return "Câncer"}
}
7 {
if ($dia -lt 23)  { return "Câncer"} else {return "Leão"}
}
8 {
if ($dia -lt 23)  { return "Leão"} else {return "Virgem"}
}
9 {
if ($dia -lt 23)  { return "Virgem"} else {return "Libra"}
}
10 {
if ($dia -lt 23)  { return "Libra"} else {return "Escorpião"}
}
11 {
if ($dia -lt 22)  { return "Escorpião"} else {return "Sagitário"}
}
12 {
if ($dia -lt 22)  { return "Sagitário"} else {return "Capricórnio"}
}
defalt { return "Mês inválido"}
}
}

#determina o signo
$signo = get-signo -dia $dia -mes $mes

#exibe o resultado
write-host "`nOlá, $nome!" -ForegroundColor Cyan
write-host "Você tem $idade anos de idade." -ForegroundColor Yellow
write-host "seu signo é $signo." -ForegroundColor Green
