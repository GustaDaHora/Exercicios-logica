local function split(str, sep)
    local sep, fields = sep or ",", {}
    local pattern = string.format("([^%s]+)", sep)
    str:gsub(pattern, function(c) fields[#fields + 1] = c end)
    return fields
end

print("Digite todos os valores dos resistores em série:")
local emSerie = io.read()
local valoresEmSerie = 0
for _, valor in ipairs(split(emSerie, ',')) do
    valoresEmSerie = valoresEmSerie + tonumber(valor)
end

print("Digite todos os valores dos resistores em paralelo:")
local emParalelo = io.read()
local total = 0
for _, valor in ipairs(split(emParalelo, ',')) do
    total = total + 1 / tonumber(valor)
end
local valoresEmParalelo = 1 / total

print("A resistencia equivalente dos resistores em serie e:", valoresEmSerie)
print("A resistencia equivalente dos resistores em paralelo e:", valoresEmParalelo)
print("A resistencia total do circuito e:", 1 / (1/valoresEmSerie + 1/valoresEmParalelo))