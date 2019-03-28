#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
vector <int>v1={0,1,2,3,4,5,6,7,8,9};
reverse(v1.begin(),v1.end());
for (int i:v1)
cout << i<<" ";
}
