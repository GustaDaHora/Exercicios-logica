local capitalCount = 0
local lowerCount = 0
local vogais = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}

io.write("Escreva sua frase:")
local Frase = io.read()

local function contadorDeVogais(frase)
    local totalVogais = 0
    for i = 1, #frase do
        local char = frase:sub(i, i)
        for _, vogal in ipairs(vogais) do
            if char == vogal then
                totalVogais = totalVogais + 1
                if char:lower() == char then
                    lowerCount = lowerCount + 1
                else
                    capitalCount = capitalCount + 1
                end
            end
        end
    end
    return totalVogais
end

local result = contadorDeVogais(Frase)
print("Total vowels: " .. result)
print("Uppercase vowels: " .. capitalCount)
print("Lowercase vowels: " .. lowerCount)
