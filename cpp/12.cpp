#include <iostream>
#include <limits>

int main()
{
    float soma = 0, media, maior, menor, valor;
    int cont = 0, valoresAceitos = 0;

    maior = std::numeric_limits<float>::min();
    menor = std::numeric_limits<float>::max();

    while (valoresAceitos < 10)
    {
        std::cout << "Digite um valor:\n";
        std::cin >> valor;

        if (valor = > 200)
        {
            soma = soma + valor;
            valoresAceitos = valoresAceitos + 1;

            if (valor > maior)
            {
                maior = valor;
                std::cout << "Maior valor atual: " << maior << std::endl;
            }
            if (valor < menor)
            {
                menor = valor;
                std::cout << "Menor valor atual: " << menor << std::endl;
            }
            cont += 1;
            std::cout << cont << std::endl;
        }
        else
        {
            std::cout << "Digite um valor acima de 200\n";
        }
    }

    media = soma / 10;

    std::cout << "Soma dos valores: " << soma << std::endl;
    std::cout << "Média dos 10 valores: " << media << std::endl;
    std::cout << "Maior valor aceito: " << maior << std::endl;
    std::cout << "Menor valor aceito: " << menor << std::endl;
    return 0;
}