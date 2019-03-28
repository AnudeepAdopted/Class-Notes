#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	vector<int> v1;
	int i;
	iota(v1.begin(),v1.end(),1);
	vector<int>::iterator i1,i2;
	i1=v1.begin();
	i2=v1.end()-1;
	iter_swap(i1,i2);
	 for(int i=0;i<10;++i)
		 {
	 		cout<<v1[i]<<" ";
	}
	return 0;
}
