#include <iostream>
#include <deque>

int main()
{
    std::deque<char> charDeque;
    for (int x=0; x<10; ++x)
        charDeque.push_front(65 + x);
    int size = charDeque.size();
    for (int x=0; x<size; ++x) {
        std::deque<char>::iterator start =
            charDeque.begin();
        charDeque.erase(start);
        std::deque<char>::iterator iter;
        for (iter = charDeque.begin(); iter != charDeque.end(); iter++)
            std::cout << *iter;
        std::cout << std::endl;
    }
    return 0;
}

