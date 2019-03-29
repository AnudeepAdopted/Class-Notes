#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5};
    vector<int> v2;
    v2.resize(v.size());
    partial_sum(v.begin(), v.end(), v2.begin());
    for(auto i : v2)
        cout << i << " ";
    cout << endl;
}
