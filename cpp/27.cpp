#include <iostream>
#include <string>

int main()
{
    std::string meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    int numeroDoMes;
    std::cout << "Digite um numero de 1 a 12 \n";
    std::cin >> numeroDoMes;

    std::cout << "O mês " << numeroDoMes << " corresponde a " << meses[numeroDoMes - 1] << std::endl;

    return 0;
}