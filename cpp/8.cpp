#include <iostream>

int main()
{
    float saldo = 0.0, valor;
    int x, y;
    std::cout << "Enter numbers (enter 0 to stop):\n";
    std::cin >> valor;
    y = 1;
    x = 0;
    while (y < 20)
    {
        x = x + 5;
        y = y + 1;
    }
    y = 1;
    while (y < 5)
    {
        std::cout << valor << " ";
        saldo = saldo + valor;
        y = y + 1;
    }
    std::cout << "Saldo é: " << saldo << std::endl;
    std::cout << x;
}
