#include <iostream>
#include <string> // Para usar std::getline()

using namespace std;

int main() {
    double comprimento, largura, perimetro;

    cout << "Digite o comprimento do retangulo ou lado do quadrado: ";
    cin >> comprimento;

    cout << "Digite a largura do retangulo (ou pressione Enter para usar o mesmo valor do comprimento): ";
    cin.ignore(); // Para limpar o buffer do teclado antes de usar getline()
    string larguraInput;
    getline(cin, larguraInput);

    if (larguraInput.empty()) {
        perimetro = comprimento * 4;
        cout << "O perimetro do quadrado e: " << perimetro << endl;
    } else {
        largura = stod(larguraInput); // Converter a string para double
        perimetro = 2 * (comprimento + largura);
        cout << "O perimetro do retangulo e: " << perimetro << endl;
    }

    return 0;
}
