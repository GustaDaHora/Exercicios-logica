local function resistenciaeq(resSerie, resParalelo)
    local function somaRes(resistores)
        local soma = 0
        for i = 1, #resistores do
            soma = soma + resistores[i]
        end
        return soma
    end

    local function calculoRes(resistores)
        local somaInversos = 0
        for i = 1, #resistores do
            somaInversos = somaInversos + (1 / resistores[i])
        end
        return 1 / somaInversos
    end

    local resSerieTotal = somaRes(resSerie)
    local resParaleloTotal = calculoRes(resParalelo)
    local resistenciaEquivalente = resSerieTotal + resParaleloTotal
    return resistenciaEquivalente
end

io.write("Digite os resistores em série, separados por espaço: ")
local entradaSerie = io.read()
local resSerie = {}
for valor in string.gmatch(entradaSerie, "%S+") do
    local numero = tonumber(valor)
    if numero then
        table.insert(resSerie, numero)
    end
end

io.write("Digite os resistores em paralelo, separados por espaço: ")
local entradaParalelo = io.read()
local resParalelo = {}
for valor in string.gmatch(entradaParalelo, "%S+") do
    local numero = tonumber(valor)
    if numero then
        table.insert(resParalelo, numero)
    end
end

local resEquivalente = resistenciaeq(resSerie, resParalelo)

print("A resistência equivalente é: ", resEquivalente)
