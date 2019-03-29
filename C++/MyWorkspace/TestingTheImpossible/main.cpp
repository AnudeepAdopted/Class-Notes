#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1{1, 3, 7};
    
    for(int i : v1)
    {
        if(i == cin.get())
        {
            cout << "The element is " << i;
        }
        else 
        {
            cout << "NO for i = " << i << endl;
        }
    }
    cout << endl;
}
