#include <iostream>
#include <cmath>

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    if (num == 2 || num == 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i <= std::sqrt(num); i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num;
    std::cout << "Digite um numero: ";
    std::cin >> num;

    if (isPrime(num))
    {
        std::cout << num << " é primo." << std::endl;
    }
    else
    {
        std::cout << num << " não é primo." << std::endl;
    }

    return 0;
}
