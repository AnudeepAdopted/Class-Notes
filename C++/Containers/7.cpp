#include <iostream>
#include <deque>


class obj {
public:
    int x;
    obj(int y) : x(y) { }
};

int main()
{
    std::deque<obj> objDeque(10, 1);
    int x = 0;
    std::deque<obj>::iterator iter;
    for (iter = objDeque.begin(); iter != objDeque.end(); iter++)
        std::cout << "Element #" << x++ << ": " << iter->x << std::endl;
    return 0;
}

