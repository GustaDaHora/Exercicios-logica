local Numbers = {}
local idades = 0
local maisDe21 = {}
local soma = 0
local somaMaisDe21 = 0

while true do
io.write("Digite a idade: ")
local Escolha = io.read()
    Escolha = tonumber(Escolha)
    if Escolha then
        table.insert(Numbers, Escolha)
        idades = idades + 1
        soma = soma + Escolha
        if Escolha > 21 then
            table.insert(maisDe21, Escolha)
            somaMaisDe21 = somaMaisDe21 + 1
        end
        io.write("Deseja continuar? \n Sim  Não \n")
        local continuar = io.read()
        if continuar:lower() == "não" or continuar:lower() == "nao" or continuar:lower() == "n" then
            break
        end
    else
        print("Entrada inválida. Por favor, insira um número válido.")
    end
end

print("Foram digitadas:", idades, "idades, que são:")
for i, v in ipairs(Numbers) do
    print(v)
end
print("A média é:", soma / idades)
print(somaMaisDe21,"pessoas têm mais de 21 anos, que são: \n")
for i, v in ipairs(maisDe21) do
    print(v)
end
