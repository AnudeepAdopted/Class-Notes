#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
vector <int>v1={0,1,2,3,3,4,4,5,5,6,7,8,9};
vector<int>::iterator i;
unique(v1.begin(),v1.end());
for (i=v1.begin();i!=v1.end();i++)
{
	cout<<*i<<"";
}
return 0;
}
	
