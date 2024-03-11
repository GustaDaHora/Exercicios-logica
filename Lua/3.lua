io.write("Digite o valor da aplicação inicial: ")
local aplicacao_inicial = tonumber(io.read())
io.write("Digite o período em anos: ")
local anos = tonumber(io.read())
io.write("Digite a taxa de juros por período anual (%): ")
local taxa_juros = tonumber(io.read())
local taxa_decimal = taxa_juros / 100
local juros = aplicacao_inicial * anos * taxa_decimal
print("O juro simples é:", juros)