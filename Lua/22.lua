local array = {}
local arrayResultante = {}
print("Digite 10 valores:")
for i = 1, 10 do
    print("Digite o valor numero", i, ":")
    local valor = io.read("*n")
    table.insert(array, valor)
    print("Numero", valor, "adicionado")
end

local tamanho = #array
for i = 1, tamanho do
    if i % 2 == 0 then
        -- Se a posição é par, armazenar um valor ímpar
        if array[i] % 2 ~= 0 then
            arrayResultante[i] = array[i]
        else
            arrayResultante[i] = array[i] + 1
        end
    else
        -- Se a posição é ímpar, armazenar um valor par
        if array[i] % 2 == 0 then
            arrayResultante[i] = array[i]
        else
            arrayResultante[i] = array[i] + 1
        end
    end
end

print("Array resultante:")
for i = 1, tamanho do
    io.write(arrayResultante[i] .. " ")
    print("posição do array:", i)
end
print()
