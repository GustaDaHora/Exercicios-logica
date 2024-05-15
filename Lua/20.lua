local array = {}
local reversedArray = {}
local quantidade = #array

while #array < 5 do
    print("Digite 5 valores:")
    local valor = io.read("*n")
    table.insert(array, valor)
    print("Numero", valor, "adicionado")
end

for i = #array, 1, -1 do
    table.insert(reversedArray, array[i])
end

print("Valores adicionados:")
for i, v in ipairs(array) do
    io.write(v, ", ")
end
print()
print(" Tabela reversa:")
for i, v in ipairs(reversedArray) do
    io.write(v, ", ")
end
