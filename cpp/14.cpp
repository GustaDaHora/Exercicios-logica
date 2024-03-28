#include <iostream>

int main()
{
    float avaliacao1, avaliacao2, avaliacao3, avaliacao4, avaliacao5, peso1, peso2, peso3, peso4, peso5, mediaPonderada;

    std::cout << "Digite a primeira avaliação: \n";
    std::cin >> avaliacao1;
    std::cout << "Digite o peso da primeira avaliação: \n";
    std::cin >> peso1;

    std::cout << "Digite a segunda avaliação: \n";
    std::cin >> avaliacao2;
    std::cout << "Digite o peso da primeira avaliação: \n";
    std::cin >> peso2;

    std::cout << "Digite a terceira avaliação: \n";
    std::cin >> avaliacao3;
    std::cout << "Digite o peso da primeira avaliação: \n";
    std::cin >> peso3;

    std::cout << "Digite a quarta avaliação: \n";
    std::cin >> avaliacao4;
    std::cout << "Digite o peso da primeira avaliação: \n";
    std::cin >> peso4;

    std::cout << "Digite a quinta avaliação: \n";
    std::cin >> avaliacao5;
    std::cout << "Digite o peso da primeira avaliação: \n";
    std::cin >> peso5;

    mediaPonderada = (avaliacao1 * peso1 + avaliacao2 * peso2 + avaliacao3 * peso3 + avaliacao4 * peso4 + avaliacao5 * peso5) / (peso1 + peso2 + peso3 + peso4 + peso5);

    std::cout << "A média ponderada das 5 avaliações é:" << mediaPonderada;
}