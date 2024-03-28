#include <iostream>

int main()
{
    int primeiroTermo, razao, n;

    std::cout << "Digite o primeiro termo da progressão aritmética: \n";
    std::cin >> primeiroTermo;
    std::cout << "Digite a razão da progressão aritmética: \n";
    std::cin >> razao;
    std::cout << "Digite o número de termos da progressão aritmética: \n";
    std::cin >> n;

    std::cout << "Os " << n << " termos da progressão aritmética são: ";
    int termoAtual = primeiroTermo;
    for (int i = 1; i <= n; i++)
    {
        std::cout << termoAtual << std::endl;
        termoAtual = termoAtual + razao;
    }
}