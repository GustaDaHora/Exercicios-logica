#include <iostream>
#include <cmath>

int main()
{
    float a, b, c, delta, x1, x2;

    std::cout << "Digite o coeficiente 'a':\n";
    std::cin >> a;
    std::cout << "Digite o coeficiente 'b':\n";
    std::cin >> b;
    std::cout << "Digite o coeficiente 'c':\n";
    std::cin >> c;

    delta = (b * b) - (4 * a * c);
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "As raízes da equação são: x1 = " << x1 << " e x2 = " << x2;
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        std::cout << "A equação possui uma raiz real dupla: x = " << x1;
    }
    else
    {
        float parteReal = -b / (2 * a);
        float parteImaginaria = sqrt(abs(delta)) / (2 * a);
        std::cout << "As raízes da equação são complexas: x1 = " << parteReal << " + " << parteImaginaria << "i e x2 = " << parteReal << " - " << parteImaginaria << "i";
    }
    return 0;
}