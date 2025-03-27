#include <iostream>
#include <vector>

int main() {
    std::vector<int> L = {1, 2, 3, 4, 5};

    int Y = 10;
    int Pi = 2;

    if (Pi >= 0 && Pi < L.size()) {
        L.insert(L.begin() + Pi + 1, Y);

        for (int valor : L) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Inserção falhou: posição inválida." << std::endl;
    }

    return 0;
}

