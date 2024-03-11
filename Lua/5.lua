io.write("Escolha\n 1 - Deslocamentoou\n 2 - Velocidade media:\n")
local Escolha = tonumber(io.read())

if Escolha == 1 then
    io.write("Escreva o intervalo de tempo em horas: ")
    local tempo = tonumber(io.read())
    io.write("Escreva a velocidade media em Km/H: ")
    local velocidade = tonumber(io.read())
    print("Deslocamento e: ", velocidade * tempo)
else if Escolha == 2 then
    io.write("Escreva o intervalo de tempo em horas: ")
    local tempo = tonumber(io.read())
    io.write("Escreva o deslocamento em km: ")
    local deslocamento = tonumber(io.read())
    print("Velocidade media e:", deslocamento/tempo,"Km/H")
end
end