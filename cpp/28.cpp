#include <iostream>
#include <string>

std::string CapsCounter(const std::string &Frase)
{
    int capitalCount = 0;
    int lowerCount = 0;
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (char c : Frase)
    {
        for (char i : vogais)
        {
            if (c == i)
            {
                if (std::isupper(c)) // Count uppercase vowels
                {
                    capitalCount++;
                }
                else if (std::islower(c)) // Count lowercase vowels
                {
                    lowerCount++;
                }
                break; // Exit the inner loop when a vowel is found
            }
        }
    }

    // Create a result string summarizing the counts
    std::string result = "Total uppercase vowels: " + std::to_string(capitalCount) + "\n";
    result += "Total lowercase vowels: " + std::to_string(lowerCount) + "\n";

    return result; // Return the summary
}

int main()
{
    std::string frase;
    std::cout << "Escreva sua frase: \n";
    std::getline(std::cin, frase); // Read the entire input line

    // Call the function and get the result
    std::string summary = CapsCounter(frase);

    // Output the summary
    std::cout << summary;

    return 0;
}