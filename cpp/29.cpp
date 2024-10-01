#include <iostream>
#include <cmath>

float raioCalculater(float raio)
{
    float volume = (4 * 3.14 * std::pow(raio, 3)) / 3;
    return volume;
}

int main()
{
    float raio;
    std::cout << "Escreva o raio: \n";
    std::cin >> raio;

    float summary = raioCalculater(raio);

    std::cout << "Volume da esfera: " << summary << std::endl;

    return 0;
}
