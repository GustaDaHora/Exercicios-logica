#include <iostream>
#include <string>

int main()
{
    int baseMaior, baseMenor, altura, diagonalMaior, diagonalMenor, areaTrapezio, areaLosangolo, areaRetangulo, baseRetangulo, alturaRetangulo;
    std::string figuraMaior;

    std::cout << "Digite a base maior do trapézio:\n";
    std::cin >> baseMaior;
    std::cout << "Digite a base menor do trapézio:\n";
    std::cin >> baseMenor;
    std::cout << "Digite a altura do trapézio:\n";
    std::cin >> altura;
    std::cout << "Digite a diagonal maior do losangolo:\n";
    std::cin >> diagonalMaior;
    std::cout << "Digite a diagonal menor do losangolo:\n";
    std::cin >> diagonalMenor;
    std::cout << "Digite a base do retângulo:\n";
    std::cin >> baseRetangulo;
    std::cout << "Digite a altura do retângulo:\n";
    std::cin >> alturaRetangulo;

    areaTrapezio = ((baseMaior + baseMenor) * altura) / 2;
    areaLosangolo = (diagonalMaior * diagonalMenor) / 2;
    areaRetangulo = baseRetangulo * altura;

    std::cout << "Área do Trapézio: " << areaTrapezio << "\n";
    std::cout << "Área do Losangolo: " << areaLosangolo << "\n";
    std::cout << "Área do Retangulo: " << areaRetangulo << "\n";

    if (areaTrapezio > areaLosangolo && areaTrapezio > areaRetangulo)
    {
        figuraMaior = "Trapézio";
    }
    else if (areaLosangolo > areaRetangulo)
    {
        figuraMaior = "Losangolo";
    }
    else
    {
        figuraMaior = "Retangulo";
    }
    std::cout << "A figura com a maior área é o: " << figuraMaior << std::endl;
}
