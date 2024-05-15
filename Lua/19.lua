print("Digite o numero da carta (de 1 a 52): ")
Numero_carta = tonumber(io.read())

if Numero_carta >= 1 and Numero_carta <= 13 then
    Naipe = "paus"
elseif Numero_carta >= 14 and Numero_carta <= 26 then
    Naipe = "copas"
elseif Numero_carta >= 27 and Numero_carta <= 39 then
    Naipe = "espadas"
elseif Numero_carta >= 40 and Numero_carta <= 52 then
    Naipe = "ouro"
end

if Numero_carta % 13 == 0 then
    Valor = "Rei"
elseif Numero_carta % 13 == 1 then
    Valor = "Ás"
elseif Numero_carta % 13 == 11 then
    Valor = "Dama"
elseif Numero_carta % 13 == 12 then
    Valor = "Valete"
else
    Valor = Numero_carta % 13
end

print("A carta e", Valor, "de", Naipe, ".")