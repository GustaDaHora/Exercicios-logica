local function aleatorio(minimo, maximo)
    local sorteio = math.random(minimo, maximo)
    return sorteio
end

-- exemplo de um dado de 6 lados
print(aleatorio(1, 6))
-- exemplo de uma bolinha de um globo
print(aleatorio(1, 100))
