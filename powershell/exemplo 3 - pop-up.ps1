[int] $idade = [int](Read-Host "Digite sua idade")

if ($idade -lt 12) {
Write-host "Você é uma criança." -Foreground Cyan}

elseif ($idade -ge 12 -and $idade -lt 18) {
write-host "Você é um adolescente." -ForegroundColor yellow}
elseif ($idade -ge 18 -and $idade -lt 60) {
write-host "Você é um adulto." -ForegroundColor green}
else {
write-host "Você é um idoso." -ForegroundColor Magenta}