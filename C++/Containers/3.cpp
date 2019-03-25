
#include <iostream>
#include <vector>

int main()
{
    // Create and populate the vector.
    std::vector<char> charVector;
    for (int i=0; i<10; ++i)
        charVector.push_back(65 + i);
    // Display the starting vector.
    std::cout << "Original vector: ";
    std::vector<char>::iterator iter;
    for (iter = charVector.begin(); iter != charVector.end(); iter++)
        std::cout << *iter;
    std::cout << std::endl;
    // Insert five Xs into the vector.
    std::vector<char>::iterator start = charVector.begin();
    charVector.insert(start, 5, 'X');
    // Display the result.
    std::cout << "Resultant vector: ";
    for (iter = charVector.begin(); iter != charVector.end(); iter++)
        std::cout << *iter;
    return 0;
}

