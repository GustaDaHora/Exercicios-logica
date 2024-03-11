local Numbers = {}

while true do
    io.write("Adicione um numero ou pressione enter para finalizar: ")
    local Escolha = io.read()
    if Escolha == "" then
        break
    end
    Escolha = tonumber(Escolha)
    if Escolha then
        table.insert(Numbers, Escolha)
        print("Numero", Escolha, "adicionado")
    else
        print("Entrada inválida. Por favor, insira um número válido.")
    end
end
print("Números adicionados:")
for i, v in ipairs(Numbers) do
    print(i, v)
end

local largest = -math.huge
local smallest = math.huge
local countTable = {}

for _, number in ipairs(Numbers) do
    if number > largest then
        largest = number
    end
    
    if number < smallest then
        smallest = number
    end
    
    countTable[number] = (countTable[number] or 0) + 1
end

local repeats = {}
for number, count in pairs(countTable) do
    if count > 1 then
        table.insert(repeats, number)
    end
end

print("Maior numero:", largest)
print("Menor numero:", smallest)
print("Numeros que apareceram mais de uma vez:", table.concat(repeats, ", "))
