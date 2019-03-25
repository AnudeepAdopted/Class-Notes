#include <iostream>
#include <list>
#include <queue>

int main()
{
    std::priority_queue<int, std::vector<int> > intPQueue;
    intPQueue.push(400);
    intPQueue.push(100);
    intPQueue.push(500);
    intPQueue.push(300);
    intPQueue.push(200);
    std::cout << "Values removed from priority queue:" << std::endl;
    int size = intPQueue.size();
    for (int x=0; x<size; ++x) {
        std::cout << intPQueue.top() << std::endl;
        intPQueue.pop();
    }
    return 0;
}
