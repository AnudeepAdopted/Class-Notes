#include <iostream>
#include <iterator>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> flist {10, 20, 30, 40, 50};

    forward_list<int> :: iterator itr;
    
    itr = flist.insert_after(flist.begin(), {1, 2, 3});
    
    cout << "After insert" << endl;
    
    for(int &c : flist)
    {
        cout << c << " ";
    }
    cout << endl;
    
    itr = flist.emplace_after(itr, 2);
    
    cout << "After Emplace" << endl;
    
    for(int &c : flist)
    {
        cout << c << " ";
    }
    cout << endl;
    
    itr = flist.erase_after(itr);
    
    cout << "After erase" << endl;
    
    for(int &c : flist)
    {
        cout << c << " ";
    }
    cout << endl;
}
