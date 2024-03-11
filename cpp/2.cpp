#include <iostream>

using namespace std;

int main()
{
    double aplicacaoInicial, anos, taxaJuros, juros, taxaDecimal, total;

    cout << "Digite o valor da aplicacao inicial: ";
    cin >> aplicacaoInicial;

    cout << "Digite o periodo em anos: ";
    cin >> anos;

    cout << "Digite a taxa de juros por periodo anual (%): ";
    cin >> taxaJuros;

    taxaDecimal = taxaJuros / 100;
    juros = aplicacaoInicial * anos * taxaDecimal;
    total = juros + aplicacaoInicial;

    cout << "O juro simples e: " << juros << ", dando um total de " << total << endl;

    return 0;
}
