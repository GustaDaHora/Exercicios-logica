#include <iostream>
#include <complex> // Para usar números complexos

void solveQuadraticEquation(double a, double b, double c)
{
    std::complex<double> discriminant = b * b - 4.0 * a * c;
    std::complex<double> root1 = (-b + std::sqrt(discriminant)) / (2.0 * a);
    std::complex<double> root2 = (-b - std::sqrt(discriminant)) / (2.0 * a);

    std::cout << "Raizes complexas: " << root1 << " e " << root2 << std::endl;
}

int main()
{
    double a, b, c;

    std::cout << "Digite os coeficientes a, b e c: ";
    std::cin >> a >> b >> c;

    solveQuadraticEquation(a, b, c);

    return 0;
}
