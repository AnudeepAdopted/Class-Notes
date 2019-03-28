#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

	int gen()
	{
		static int i=0;
		return ++i;
	}
	int main()
	{
		int i;
		vector<int> v1(10);
		generate(v1.begin(),v1.end(),gen);
		vector<int>::iterator i1;
		for (i1=v1.begin();i1!=v1.end();i1++)
		{
			cout<<*i1<<" ";
			return 0;
		}
	}

