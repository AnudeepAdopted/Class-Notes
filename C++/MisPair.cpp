#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> va={1,1,15,20};
	vector<int> vb={1,1,12,24};
	vector<int> vc={4,21,16,27};
	vector<int> vd={0,6,54,45};
	
	pair<vector<int> ::iterator, vector<int>::iterator> mispair;
	mispair=mismatch(va.begin(),va.end(),vb.begin());
	cout<<"The first element of 1st container"<<endl;
	cout<<*mispair.first<<endl;
	cout<<"The Second element of 2nd container"<<endl;
	cout<<*mispair.second<<endl;
}

