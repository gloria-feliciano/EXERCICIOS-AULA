#exibe informações do sistema: versão da BIOS, memória, CPU e espaço em diso

#1. versão da BIOS
$bios = Get-WmiObject -class Win32_BIOS
$versaoBios = $bios.SMBIOSBIOSVersion
write-host "Versão da BIOS: $versaoBios"

#2. memória instalada
$memoria = Get-wmiObject -class Win32_OperatingSystem
$memoriaInstalada = [math]::round($memoria.TotalVisibleMemorySize / 1MB, 2)
write-host "memória instalada: $memoriaInstalada MB"

#3. informações do processador (CPU)
$cpu = Get-WmiObject -Class Win32_Processor
$nomecpu = $cpu.Name
$numeroDeNucleos = $cpu.NUmberOfCores
$numeroDeThreads = $cpu.NumerOfLogicalProcessors
write-host "CPU: $nomeCpu"
write-host "Número de núcleos: $numeroDeNucleos"
write-host "Número de threads: $numeroDeThreads"

#4. espaço em disco
$disco = Get-WmiObject -Class Win32_LogicalDisk -Filter "DriveType=3"
foreach ($particao in $disco) {
$letraUnidade = $particao.DeviceID
$tamanhoTotal = [math]::round($particao.Size / 1GB, 2)
$espaçoLivre = [math]::round($particao.FreeSpace / 1GB, 2)
$espaçoUsado = [math]::round(($particao.Size - $particao.FreeSpace) / 1GB, 2)
write-host "${letraUnidade}: Total = ${tamanhoTotal} GB, Livre = ${espaCoLivre} GB, Usado = ${espacoUsado} GB"
}