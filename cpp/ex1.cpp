#include <iostream>

using namespace std;

int main() {
    const int TAMANHO = 30;
    int V[TAMANHO];
    int pares[TAMANHO], impares[TAMANHO];
    int countPares = 0, countImpares = 0;
    int numero, index = 0;
    
    cout << "Digite números inteiros e positivos (o vetor suporta no máximo 30 valores):\n";
    while (index < TAMANHO) {
        cout << "Número: ";
        cin >> numero;
        
        if (numero <= 0) {
            cout << "Apenas números positivos são permitidos!" << endl;
            continue;
        }
        
        V[index] = numero; // Armazena no vetor principal
        
        // Classifica em par ou ímpar
        if (numero % 2 == 0) {
            pares[countPares++] = numero;
        } else {
            impares[countImpares++] = numero;
        }
        
        index++;
    }
    
    // Exibir os resultados
    cout << "\nLista de números pares:" << endl;
    for (int i = 0; i < countPares; i++) {
        cout << pares[i] << " ";
    }
    cout << endl;
    
    cout << "\nLista de números ímpares:" << endl;
    for (int i = 0; i < countImpares; i++) {
        cout << impares[i] << " ";
    }
    cout << endl;
    
    return 0;
}

