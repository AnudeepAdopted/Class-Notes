#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(8);
	iota(v.begin(), v.end(), 10);
	for(auto i : v)
		cout << i << " ";
	cout << endl;
	return 0;
}
