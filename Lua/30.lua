local dados = {
    Matricula = 1234,
    Nome = "Gustavo",
    Salario = 3265,
    DatadeNascimento = {
        Dia = 29,
        Mes = "Novembro",
        Ano = 2005
    }
}

local function trocaValores(table, numero, valorParaTroca)
    if numero == 1 then
        table.Matricula = tonumber(valorParaTroca)
    elseif numero == 2 then
        table.Nome = valorParaTroca
    elseif numero == 3 then
        table.Salario = tonumber(valorParaTroca)
    elseif numero == 4 then
        print("Digite o dia de nascimento:")
        table.DatadeNascimento.Dia = tonumber(io.read())
        print("Digite o mês de nascimento:")
        table.DatadeNascimento.Mes = io.read()
        print("Digite o ano de nascimento:")
        table.DatadeNascimento.Ano = tonumber(io.read())
    end
    return table
end

while true do
    io.write(
        "\nDigite o número correspondente ao valor que você quer trocar: 0 - Terminar; 1 - Matricula; 2 - Nome; 3 - Salario; 4 - DatadeNascimento; 5 - Consultar valores\n")
    local numero = tonumber(io.read())

    if numero == 0 then
        break
    elseif numero == 5 then
        print("Matricula:", dados.Matricula)
        print("Nome:", dados.Nome)
        print("Salario:", dados.Salario)
        print("Data de Nascimento: Dia", dados.DatadeNascimento.Dia, "Mes", dados.DatadeNascimento.Mes, "Ano",
            dados.DatadeNascimento.Ano)
    else
        io.write("Digite o que você quer colocar no lugar: ")
        local valor = io.read()

        trocaValores(dados, numero, valor)
    end
end
