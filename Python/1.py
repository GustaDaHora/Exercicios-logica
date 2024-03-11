comprimento = float(input("Digite o comprimento do retângulo ou lado do quadrado: "))
largura_input = input("Digite a largura do retângulo (ou pressione Enter para usar o mesmo valor do comprimento): ")

if largura_input == "":
    largura = comprimento
else:
    largura = float(largura_input)

if largura == comprimento:
    perimetro = comprimento * 4
    print("O perímetro do quadrado é:", perimetro)
else:
    perimetro = 2 * (comprimento + largura)
    print("O perímetro do retângulo é:", perimetro)
