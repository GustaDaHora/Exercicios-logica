print("Escolha uma opção:")
print("1. Converter de Celsius para Fahrenheit")
print("2. Converter de Fahrenheit para Celsius")
io.write("Opção: ")
local opcao = tonumber(io.read())

if opcao == 1 then
    io.write("Digite a temperatura em Celsius: ")
    local temperatura_celsius = tonumber(io.read())
    local temperatura_fahrenheit = (9 / 5) * temperatura_celsius + 32
    print("A temperatura em Fahrenheit é:", temperatura_fahrenheit)
elseif opcao == 2 then
    io.write("Digite a temperatura em Fahrenheit: ")
    local temperatura_fahrenheit = tonumber(io.read()) 
    local temperatura_celsius = (5 / 9) * (temperatura_fahrenheit - 32)
    print("A temperatura em Celsius é:", temperatura_celsius)
else
    print("Opção inválida.")
end
