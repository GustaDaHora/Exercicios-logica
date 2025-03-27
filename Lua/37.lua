local lista = {1, 2, 3, 4, 5, 6, 7, 8, 9}
local valueY = 75465984323165
local Pi = 5
local novaLista = {}

-- Fill novaLista starting from the second element of lista
for i = 1, #lista do
    table.insert(novaLista, lista[i])
end
table.insert(novaLista, Pi-1, valueY)
-- Print the contents of novaLista
for i, v in ipairs(novaLista) do
    print(i, v)
end

