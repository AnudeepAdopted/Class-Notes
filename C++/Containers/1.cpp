  #include <iostream>
#include <vector>

int main()
{
    std::vector<int> intVector(10, 1);
    int x = 0;
    std::vector<int>::iterator iter;
    for (iter = intVector.begin(); iter != intVector.end(); iter++)
        std::cout << "Element #" << x++ << ": " << *iter << std::endl;
    return 0;
}

