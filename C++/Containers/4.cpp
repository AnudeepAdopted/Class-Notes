#include <iostream>
#include <vector>

int main()
{
    std::vector<char> charVector;
    for (int i=0; i<10; ++i)
        charVector.push_back(65 + i);
    int size = charVector.size();
    for (int i=0; i<size; ++i) {
        charVector.pop_back();
        std::vector<char>::iterator iter;
        for (iter = charVector.begin(); iter != charVector.end(); iter++)
            std::cout << *iter;
        std::cout << std::endl;
    }
    return 0;
}

