#include <iostream>
#include <vector>

int main()
{
    // Create two vector objects.
    std::vector<char> charVector1;
    for (int x=0; x<10; ++x)
        charVector1.push_back(65 + x);
    std::vector<char> charVector2;
    for (int x=0; x<10; ++x)
        charVector2.push_back(66 + x);
    // Display the vectors.
    std::cout << "Vector 1: ";
    std::vector<char>::iterator iter;
    for (iter = charVector1.begin(); iter != charVector1.end(); iter++)
        std::cout << *iter;
    std::cout << std::endl;
    std::cout << "Vector 2: ";
    for (iter = charVector2.begin(); iter != charVector2.end(); iter++)
        std::cout << *iter;
    std::cout << std::endl;
    // Compare the vectors.
    if (charVector1 == charVector2)
        std::cout << "vector1 == vector2";
    else if (charVector1 < charVector2)
        std::cout << "vector1 < vector2";
    else if (charVector1 > charVector2)
        std::cout << "vector1 > vector2";
    return 0;
}

