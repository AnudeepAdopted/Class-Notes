#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main(){
		vector<int> v1{1,2,3,4,5};
		vector<int> v2{7,7,7,7,7};
		cout<<"vector contains"<<endl;
		for(int i=0;i<v1.size();i++)
	    cout<<v1[i]<<" ";
	    cout<<endl;
	    cout<<"vector2 contains"<<endl;
	    for(int i=0;i<v2.size();i++)
	    cout<<v2[i]<<" ";
	    cout<<endl;
}
