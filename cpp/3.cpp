#include <iostream>

using namespace std;

int main()
{
    int opcao;
    double temperaturaCelsius, temperaturaFahrenheit;

    cout << "Escolha uma opcao:" << endl;
    cout << "1. Converter de Celsius para Fahrenheit" << endl;
    cout << "2. Converter de Fahrenheit para Celsius" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    if (opcao == 1)
    {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temperaturaCelsius;
        temperaturaFahrenheit = (9.0 / 5.0) * temperaturaCelsius + 32;
        cout << "A temperatura em Fahrenheit e: " << temperaturaFahrenheit << endl;
    }
    else if (opcao == 2)
    {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temperaturaFahrenheit;
        temperaturaCelsius = (5.0 / 9.0) * (temperaturaFahrenheit - 32);
        cout << "A temperatura em Celsius e: " << temperaturaCelsius << endl;
    }
    else
    {
        cout << "Opcao invalida." << endl;
    }

    return 0;
}
