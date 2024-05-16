local Table = {}
local Azul, Vermelho, Amarelo = 0, 0, 0

for i = 1, 20 do
    print(i, "escolha")
    print("1. Azul")
    print("2. Vermelho")
    print("3. Amarelo")
    io.write("Escolha: ")
    local escolha = tonumber(io.read())
    if escolha == 1 then
        table.insert(Table, "Azul")
    elseif escolha == 2 then
        table.insert(Table, "Vermelho")
    elseif escolha == 3 then
        table.insert(Table, "Amarelo")
    else
        print("Escolha invalida!")
    end
end

for index, value in ipairs(Table) do
    print(index, value) 
    if value == "Azul" then
        Azul = Azul + 1
    elseif value == "Vermelho" then
        Vermelho = Vermelho + 1
    elseif value == "Amarelo" then
        Amarelo = Amarelo + 1
    else
        print("Erro no if do for")
    end
end

print("Azul:", Azul)
print("Vermelho:", Vermelho)
print("Amarelo:", Amarelo)