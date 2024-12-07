local function lerArquivo(file)
    local arquivo, erro = io.open(file, "r")
    if not arquivo then
        print("Erro ao abrir o arquivo:", erro)
        return
    end

    local conteudo = arquivo:read("*a")
    arquivo:close()

    local vogais = { a = true, e = true, i = true, o = true, u = true, A = true, E = true, I = true, O = true, U = true }

    local contador = 0

    for letra in conteudo:gmatch(".") do
        if vogais[letra] then
            contador = contador + 1
        end
    end

    return contador
end

local matriz_identidade = nil

local function gerar_matriz_identidade(n)
    if n <= 0 then
        error("O tamanho da matriz deve ser maior que zero.")
    end

    local matriz = {}
    for i = 1, n do
        matriz[i] = {}
        for j = 1, n do
            matriz[i][j] = (i == j) and 1 or 0
        end
    end

    matriz_identidade = matriz

    return matriz
end

local function main()
    local vogais = lerArquivo("texte.txt")
    print("Total de vogais no arquivo:", vogais)

    local gerar_matriz = gerar_matriz_identidade(4)
end

main()
