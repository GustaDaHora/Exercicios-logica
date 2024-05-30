#include <iostream>

int main()
{
    int conj1[5] = {7, 25, -2, 80, -31};
    int conj2[5] = {81, 12, 7, -90, 16};
    int conj3[5];

    for (int i = 0; i < 5; ++i)
    {
        conj3[i] = conj1[i] + conj2[i];
        std::cout << conj3[i] << std::endl;
    }

    return 0;
}