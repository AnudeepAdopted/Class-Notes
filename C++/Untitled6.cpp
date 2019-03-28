#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int increment(int x)
int main(){
	int a1[]={1,2,3};
	int a2[]={4,5,6};
	int n:size of (a1)/size of (a1[0]);
	int res[n];
	transform(a1,a1+n,a1,increment);
		 for(int i=0;i<n;i++)
		 {
	 		cout<<res[i]<<" ";
		 }
		 int increment(int x){
		 	return (x+1);
		 }
		 return 0;
//	 for(int i=0;i<n;i++)
//	 {
//	 	res[i]=a1[i]+a2[i];
//	 	for(int i=0;i<n;i++)
//	 	{
//	 		cout<<res[i]<<" ";
//		 }
//		 transform(a1,a1+n,res,plus<int>());
//		 for(int i=0;i<n;i++)
//		 {
//	 		cout<<res[i]<<" ";
//		 }
//		 return 0;
//	 }
}
