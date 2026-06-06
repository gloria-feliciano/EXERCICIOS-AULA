[string[]] $alunos = @()
[int] $quantidade = [int] (Read-Host "Quantos nomes você deseja inserir?")

for ($i = 1; $i -le $quantidade; $i++) {
    $nome = Read-Host "Digite o nome do aluno $i"
    $alunos += $nome
}

Write-Host " nLista de alunos cadastrados: "
$alunos | ForEach-Object { Write-Host "- $_"}

Write-Host "nTotal de alunos $($alunos.Count)"

Write-Host "`nTotal em ordem alfebética:"
$alunos | Sort-Object | ForEach-Object { Write-Host "- $_" }