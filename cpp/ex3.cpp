#include <iostream>
#include <vector>
#include <iterator>

size_t comprimentoLista(const std::vector<int>& L, const int* Pf) {
    return std::distance(L.begin(), Pf) + 1;
}

int main() {
    std::vector<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    const int* Pf = &L[L.size() - 1];

    size_t comprimento = comprimentoLista(L, Pf);

    std::cout << "Comprimento efetivo da lista: " << comprimento << std::endl;

    return 0;
}

