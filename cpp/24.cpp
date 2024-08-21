#include <iostream>

int main()
{
    int v1, v2;
    float vr;

    v1 = 125;
    v2 = 14;
    vr = static_cast<float>(v1) / v2;
    std::cout << vr;

    return 0;
}