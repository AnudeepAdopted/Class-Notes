#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	vector<int> v1={1,5,8,3};
	vector<int> v2(5);
	vector<int> v3(5);
	copy(v1.begin(),v1.end(),v2.begin());
	cout<<"the new vector element"<<endl;
	for(int i=0;i<v2.size();i++)
	cout<<v2[i]<<" ";
	cout<<endl;
	cout_n(v1.begin(),4,v3.begin());
	cout<<"the elements of v3 are"<<endl;
	for(int i=0,i<v3.size();i++)
	cout<<v3[i]<<"";
	cout<<endl;
	return 0;
}
