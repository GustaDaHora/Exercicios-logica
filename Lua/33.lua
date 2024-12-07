local function percentualIgualdade(vetor1, vetor2)
    local iguais = 0
    local tamanhoMin = math.min(#vetor1, #vetor2)

    for i = 1, tamanhoMin do
        if vetor1[i] == vetor2[i] then
            iguais = iguais + 1
        end
    end
    print(iguais)

    return (iguais / tamanhoMin) * 100
end

local v1 = { 1, 2, 3, 4, 5, 6, 1, 5, 4, 8, 4, 5 }
local v2 = { 9, 8, 3, 6, 5, 4, 3, 5, 1, 2, 5, 6 }

local percentual = percentualIgualdade(v1, v2)
print(string.format("Percentual de igualdade: %.2f%%", percentual))
