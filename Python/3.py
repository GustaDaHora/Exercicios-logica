print("Escolha uma opção:")
print("1. Converter de Celsius para Fahrenheit")
print("2. Converter de Fahrenheit para Celsius")

opcao = int(input("Opcao: "))

if opcao == 1:
    temperatura_celsius = float(input("Digite a temperatura em Celsius: "))
    temperatura_fahrenheit = (9 / 5) * temperatura_celsius + 32
    print("A temperatura em Fahrenheit é:", temperatura_fahrenheit)
elif opcao == 2:
    temperatura_fahrenheit = float(input("Digite a temperatura em Fahrenheit: "))
    temperatura_celsius = (5 / 9) * (temperatura_fahrenheit - 32)
    print("A temperatura em Celsius é:", temperatura_celsius)
else:
    print("Opção inválida.")
