aplicacao_inicial = float(input("Digite o valor da aplicação inicial: "))
anos = float(input("Digite o período em anos: "))
taxa_juros = float(input("Digite a taxa de juros por período anual (%): "))
taxa_decimal = taxa_juros / 100
juros = aplicacao_inicial * anos * taxa_decimal
total = juros + aplicacao_inicial
print("O juro simples é:", juros, "dando um total de: ", total)