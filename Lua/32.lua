local dados = {
    nota1 = 0,
    nota2 = 0,
    nota3 = 0,
    nota4 = 0
}

local function calculoMedia(table)
    local mediaSimples = (table.nota1 + table.nota2 + table.nota3 + table.nota4) / 4
    return mediaSimples
end

io.write("Digite a primeira nota: ")
dados.nota1 = tonumber(io.read())
io.write("Digite a segunda nota: ")
dados.nota2 = tonumber(io.read())
io.write("Digite a terceira nota: ")
dados.nota3 = tonumber(io.read())
io.write("Digite a quarta nota: ")
dados.nota4 = tonumber(io.read())

local media = calculoMedia(dados)

print("A média das notas é: ", media)
