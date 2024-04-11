#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int pa = 0, pe = 1, te = 2;
    int partidas, partJogadas = 0, comp, usu;
    int vitorias = 0, derrotas = 0;

    std::cout << "Quantas partidas deseja jogar? \n";
    std::cin >> partidas;

    while (partJogadas < partidas)
    {
        std::cout << "Escolha 0 para papel, 1 para pedra ou 2 para tesoura: \n";
        std::cin >> usu;
        comp = rand() % 3;
        if (comp == usu)
        {
            std::cout << "Empate!";
        };
        if ((usu == pa) && (comp == pe))
        {
            std::cout << "O computador escolheu pedra \n";
            std::cout << "Papel vence pedra, Você ganhou!";
            vitorias += 1;
        }
        else if ((comp == pa) && (usu == pe))
        {
            std::cout << "O computador escolheu papel \n ";
            std::cout << "Papel vence pedra, Você perdeu.";
            derrotas += 1;
        };
        if ((usu == pe) && (comp == te))
        {
            std::cout << "O computador escolheu tesoura \n ";
            std::cout << "Pedra vence tesoura, Você ganhou!";
            vitorias += 1;
        }
        else if ((comp == pe) && (usu == te))
        {
            std::cout << "O computador escolheu pedra \n";
            std::cout << "Pedra vence tesoura, Você perdeu.";
            derrotas += 1;
        };
        if ((usu == te) && (comp == pa))
        {
            std::cout << "O computador escolheu papel \n ";
            std::cout << "Tesoura vence papel, Você ganhou!";
            vitorias += 1;
        }
        else if ((comp == te) && (usu == pa))
        {
            std::cout << "O computador escolheu tesoura \n";
            std::cout << "Tesoura vence papel, Você perdeu.";
            derrotas += 1;
        };

        std::cout << std::endl;
        partJogadas++;
    }

    std::cout << "Número de vitórias: " << vitorias << std::endl;
    std::cout << "Número de derrotas: " << derrotas << std::endl;

    return 0;
}
