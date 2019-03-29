#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
    int sum = 0;
	vector<int> v(8);
	iota(v.begin(), v.end(), 10);
	for(auto i : v)
		cout << i << " ";
	cout << endl;
    cout << accumulate(v.begin(), v.end(), sum) << endl;
	return 0;
}