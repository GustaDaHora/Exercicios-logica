#include <iostream>
#include <vector>

// Função para somar os valores de uma lista
int somar(const std::vector<int> &lista)
{
    int soma = 0;
    for (int valor : lista)
    {
        soma += valor;
    }
    return soma;
}

int main()
{
    // Declarando variáveis
    std::vector<int> emSerie, emParalelo;
    int valoresEmSerie, valoresEmParalelo;

    // Solicitando e lendo os valores dos resistores em série
    std::cout << "Digite todos os valores dos resistores em série (digite um valor negativo para encerrar):" << std::endl;
    int valor;
    while (std::cin >> valor && valor >= 0)
    {
        emSerie.push_back(valor);
    }
    valoresEmSerie = somar(emSerie);

    // Solicitando e lendo os valores dos resistores em paralelo
    std::cout << "Digite todos os valores dos resistores em paralelo (digite um valor negativo para encerrar):" << std::endl;
    double total = 0;
    while (std::cin >> valor && valor >= 0)
    {
        emParalelo.push_back(valor);
        total += 1.0 / valor;
    }
    valoresEmParalelo = 1.0 / total;

    // Exibindo os resultados
    std::cout << "A resistência equivalente dos resistores em série é: " << valoresEmSerie << std::endl;
    std::cout << "A resistência equivalente dos resistores em paralelo é: " << valoresEmParalelo << std::endl;
    std::cout << "A resistência total do circuito é: " << valoresEmSerie + valoresEmParalelo << std::endl;

    return 0;
}
