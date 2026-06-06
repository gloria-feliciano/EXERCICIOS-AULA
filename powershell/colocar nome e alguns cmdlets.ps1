#write-output coloque seu nome
$name = read-host -prompt "coloque seu nome"
write-output "parabens $name! "

# a opção -full, informa para obter todas as informações que o comando especificado, incluindo descrição, informações do parâmetro, exemplos e muito mais
get-help -name 'write-output' -full

#para ver a lista de todos os comandos, o * permite que combine padrões para localizar informações mais dinamicamente.
get-command *

#colocar a data de hoje digitando
$date = read-host "what is today's date"
$name = read-host "enter your name"
write-output "today's date is $date"
write-output "today is the day $name"

Read-host "What is wrong with this line of code?"