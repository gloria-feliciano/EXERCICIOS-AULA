#operador -eq (igual)
$valor1 = 5
$valor2 = 5
if ($valor1 -eq $valor2) {
write-host "`$valor1 é igual a `$valor2: True"}
else { 
write-host "`$valor1 é igual a `$valor2: False"
}

#operador -ne(diferente)
$valor3 = 5
$valor4 = 3
if ($valor3 -ne $valor4) {
write-host "`$valor3 é diferente a `$valor4: True"}
else { 
write-host "`$valor3 é diferente a `$valor4: False"
}

#operador -gt (maior que)
$valor5 = 5
$valor6 = 3
if ($valor5 -gt $valor6) {
write-host "`$valor5 é maior que `$valor6: True"}
else { 
write-host "`$valor5 é maior que `$valor6: False"
}

#operador -ge (maior ou igual a)
$valor7 = 5
$valor8 = 5
if ($valor7 -ge $valor8) {
write-host "`$valor7 é maior ou igual a que `$valor8: True"}
else { 
write-host "`$valor7 é maior ou igual a `$valor8: False"
}

#operador -lt (menor que)
$valor9 = 5
$valor10 = 5
if ($valor9 -ge $valor10) {
write-host "`$valor9 é menor que `$valor10: True"}
else { 
write-host "`$valor9 é menor que `$valor10: False"
}

#operador -le (menor ou igual a)
$valor11 = 5
$valor12 = 5
if ($valor11 -ge $valor12) {
write-host "`$valor11 é menor que `$valor12: True"}
else { 
write-host "`$valor11 é menor que `$valor12: False"
}

#operador -like (corresponde a padrão)
$texto1 = "abc"
$padrao1 = "a*"
if ($texto1 -like $padrao1) {
write-host "`$texto1 correspondente ao padrão `$padrao1: true"}
else { 
write-host "´$texto1 correspondente ao padrao `$padrao1: false"}

#operador -notlike (não corresponde a padrão)
$texto2 = "abc"
$padrao2 = "d*"
if ($texto2 -like $padrao2) {
write-host "`$texto2 não correspondente ao padrão `$padrao2: true"}
else { 
write-host "´$texto2 não correspondente ao padrao `$padrao2: false"}
 
#operador -match (corresponde a expressão regular)
$texto3 = "abc123"
$regex1 = "\d+" #procura números
if ($texto3 -match $regex1) {
write-host "$texto3 corresponde à expressão regular `$regex1: true"}
else {
write-host "$texto3 corresponde à expressão regular `$regex1: false"}

#operaor -notmatch (não corresponde à expressão regular)
$texto4 = "abc123"
$regex2 = "\D+" #procura por caracteres não numéricos
if ($texto4 -match $regex2) {
write-host "$texto4 não corresponde à expressão regular `$regex2: true"}
else {
write-host "$texto4 não corresponde à expressão regular `$regex2: false"}

#operador -contains (contém um valor) - verifica se o array contém um determinado item

