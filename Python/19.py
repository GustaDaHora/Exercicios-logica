print("Digite o número da carta (de 1 a 52): ")
numero_carta = int(input())

if numero_carta >= 1 and numero_carta <= 13:
    naipe = "paus"
elif numero_carta >= 14 and numero_carta <= 26:
    naipe = "copas"
elif numero_carta >= 27 and numero_carta <= 39:
    naipe = "espadas"
elif numero_carta >= 40 and numero_carta <= 52:
    naipe = "ouro"

if numero_carta % 13 == 0:
    valor = "Rei"
elif numero_carta % 13 == 1:
    valor = "Ás"
elif numero_carta % 13 == 11:
    valor = "Valete"
elif numero_carta % 13 == 12:
    valor = "Dama"
else:
    valor = numero_carta % 13

print("A carta é", valor, "de", naipe, ".")