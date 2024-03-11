io.write("Digite sua renda mensal: ")
local Escolha = tonumber(io.read())
if Escolha <= 2640 then
    print("Você não contribui")
elseif Escolha >= 2640.01 and Escolha <= 4230 then
    print("Você deve contribuir com 7,5%")
elseif Escolha >= 4230.01 and Escolha <= 6000 then
    print("Você deve contribuir com 15%")
elseif Escolha >= 6000.01 and Escolha <= 8700 then
    print("Você deve contribuir com 25%")
elseif Escolha >= 8700.01 then
    print("Você deve contribuir com 27%")
else
    print("Valor inválido")
end
