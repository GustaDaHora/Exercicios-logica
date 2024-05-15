local positivo = 0
local negativo = 0
local par = 0
local impar = 0
Escolha = 1

while Escolha ~= 0 do
    io.write("Adicione um numero ou 0 para finalizar: ")
    Escolha = tonumber(io.read())

    if Escolha > 0 then
        positivo = positivo + Escolha
    elseif Escolha < 0 then
        negativo = negativo + Escolha
    end

    if Escolha ~= 0 then
        if Escolha % 2 == 0 then
            par = par + Escolha
        else
            impar = impar + Escolha
        end
    end
end

print("Soma dos numeros positivos: " .. positivo)
print("Soma dos numeros negativos: " .. negativo)
print("Soma dos numeros pares: " .. par)
print("Soma dos numeros ímpares: " .. impar)
