#include <iostream>
#include <vector>

int main()
{
    std::vector<char> charVector;
    int x = 0;
    for (int i=0; i<10; ++i)
        charVector.push_back(65 + i);
    std::vector<char>::iterator iter;
    for (iter = charVector.begin(); iter != charVector.end(); iter++)
        std::cout << "Element #" << x++ << ": " << *iter << std::endl;
    return 0;
}

