#função de soma (junta os números)
function Soma($a, $b) {
return $a + $b }

$a = read-host "Digite o primeiro número"
$b = read-host "Digite o segundo número"

$resultado = soma $a $b
write-host "A soma de $a e $b é: $resultado"