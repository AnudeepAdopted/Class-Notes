#include <iostream>
#include <iterator>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> flist {10, 20, 30, 40, 50};
    flist.push_front(60);
    
    cout << "The elements in flist are" << endl;
    
    for(int &c : flist)
    {
        cout << c << " ";
    }
    cout << endl;
    
    flist.emplace_front(70);
    
    cout << "The elements in the list" << endl;
    
    for(int &c : flist)
    {
        cout << c << " ";
    }
    cout << endl;
    
    flist.pop_front();
    
    cout << "After pop" << endl;
    
    for(int &c : flist)
    {
        cout << c << " ";
    }
    cout << endl;
}
