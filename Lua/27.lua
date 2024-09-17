local meses = {Janeiro = 1, Fevereiro = 2, Marco = 3, Abril = 4, Maio = 5, Junho = 6, Julho = 7, Agosto = 8, Setembro = 9, Outubro = 10, Novembro = 11, Dezembro = 12
}

io.write("Digite um numero de 1 a 12")
local numeroDoMes = tonumber(io.read())

for mes, numero in pairs(meses) do
    if numeroDoMes == numero then
        print(mes .. " corresponde ao número " .. numeroDoMes)
    end
end
