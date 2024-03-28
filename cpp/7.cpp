#include <iostream>

int main()
{
    int par, impar;

    par = 0;
    impar = 1;
    while (impar < 10)
    {
        std::cout << impar;
        while (par < 10)
        {
            std::cout << par;
            par = par + 2;
        }
        par = 0;
        impar = impar + 2;
    }
    return 0;
}
