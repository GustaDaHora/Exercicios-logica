#include <iostream>
#include <vector>

int main() {
    std::vector<int> L = {1, 3, 4, 7, 8};

    int Y = 5;

    auto it = L.begin();
    while (it != L.end() && *it < Y) {
        ++it;
    }

    L.insert(it, Y);
    for (int valor : L) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}

