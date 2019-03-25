#include <iostream>
#include <deque>

int main()
{
    std::deque<char> charDeque;
    int x = 0;
    for (int i=0; i<10; ++i)
        charDeque.push_front(65 + i);
    std::deque<char>::iterator iter;
    for (iter = charDeque.begin(); iter != charDeque.end(); iter++)
        std::cout << "Element #" << x++ << ": " << *iter << std::endl;
    return 0;
}

