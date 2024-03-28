#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main()
{
    std::vector<int> numbers;
    int num;

    std::cout << "Enter numbers (enter 0 to stop):\n";

    while (true)
    {
        std::cin >> num;
        if (num == 0)
            break;
        numbers.push_back(num);
    }

    std::cout << "You entered the following numbers:\n";
    for (int number : numbers)
    {
        std::cout << number << " ";
    }

    auto minmax = std::minmax_element(numbers.begin(), numbers.end());
    std::cout << "Menor: " << *minmax.first << '\n';
    std::cout << "Maior: " << *minmax.second << '\n';

    std::unordered_map<int, int> counts;
    for (int numb : numbers)
    {
        counts[numb]++;
    }
    std::cout << "Numeros repetidos: ";
    for (const auto &pair : counts)
    {
        if (pair.second > 1)
        {
            std::cout << pair.first << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}