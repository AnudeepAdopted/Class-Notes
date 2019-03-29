//Moifying algorithms in STL mutating algorithms
//1) copy()
//2) fill()
//3) move()
//4) transform()
//5) generic()
//6) swap()
//7) reverse()
//8) unique()
//9) rotate()

#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = {1,3,5,15};
    vector<int> v1;
    v1.resize(v.size());
    copy(v.begin(), v.end(), v1.begin());
    for(auto i : v1)
        cout << i << " ";
    cout << endl;
}
