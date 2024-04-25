print("Digite todos os valores dos resistores em série:")
emSerie = input().split(',')
valoresEmSerie = sum(map(int, emSerie))

print("Digite todos os valores dos resistores em paralelo:")
emParalelo = input().split(',')
total = 0
for valor in emParalelo:
    total += 1 / int(valor)
valoresEmParalelo = 1 / total

print("A resistência equivalente dos resistores em série é:", valoresEmSerie)
print("A resistência equivalente dos resistores em paralelo é:", valoresEmParalelo)
print("A resistência total do circuito é:", 1 / (1/valoresEmSerie + 1/valoresEmParalelo))