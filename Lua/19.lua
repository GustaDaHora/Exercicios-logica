print("Digite o numero da carta (de 1 a 52): ")
numero_carta = tonumber(io.read())

if numero_carta >= 1 and numero_carta <= 13 then
    naipe = "paus"
elseif numero_carta >= 14 and numero_carta <= 26 then
    naipe = "copas"
elseif numero_carta >= 27 and numero_carta <= 39 then
    naipe = "espadas"
elseif numero_carta >= 40 and numero_carta <= 52 then
    naipe = "ouro"
end

if numero_carta % 13 == 0 then
    valor = "Rei"
elseif numero_carta % 13 == 1 then
    valor = "Ás"
elseif numero_carta % 13 == 11 then
    valor = "Dama"
elseif numero_carta % 13 == 12 then
    valor = "Valete"
else
    valor = numero_carta % 13
end

print("A carta e", valor, "de", naipe, ".")