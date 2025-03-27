#include <iostream>
#include <vector>

int main() {
    std::vector<int> lista = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    long long valueY = 75465984323165;
    int Pi = 5;

    std::vector<long long> novaLista;
    for (int i = 0; i < lista.size(); ++i) {
        novaLista.push_back(lista[i]);
    }

    novaLista.insert(novaLista.begin() + (Pi - 1), valueY);

    for (int i = 0; i < novaLista.size(); ++i) {
        std::cout << i + 1 << " " << novaLista[i] << std::endl;
    }

    return 0;
}

