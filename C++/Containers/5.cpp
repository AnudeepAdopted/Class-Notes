
#include <iostream>
#include <vector>

int main()
{
    std::vector<char> charVector;
    for (int x=0; x<10; ++x)
        charVector.push_back(65 + x);
    int size = charVector.size();
    for (int x=0; x<size; ++x) {
        std::vector<char>::iterator start =
            charVector.begin();
        charVector.erase(start);
        std::vector<char>::iterator iter;
        for (iter = charVector.begin(); iter != charVector.end(); iter++)
            std::cout << *iter;
        std::cout << std::endl;
    }
    return 0;
}

