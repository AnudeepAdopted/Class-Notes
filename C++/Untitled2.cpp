#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	vector<int>v(8);
	fill(v.begin()+2,v.end()-1,4);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<"";
	cout<<endl;
}
