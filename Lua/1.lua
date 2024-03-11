io.write("Digite o comprimento do retângulo ou lado do quadrado: ")
    local comprimento = tonumber(io.read())
    
    io.write("Digite a largura do retângulo (ou pressione Enter para usar o mesmo valor do comprimento): ")
    local largura_input = io.read()
    
    local largura
    if largura_input == "" then
        largura = comprimento
    else
        largura = tonumber(largura_input)
    end
    
    local perimetro
    if largura == comprimento then
        perimetro = comprimento * 4
        print("O perímetro do quadrado é:", perimetro)
    else
        perimetro = 2 * (comprimento + largura)
        print("O perímetro do retângulo é:", perimetro)
    end
    