#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int *p;
	p = reinterpret_cast<int *>(a);
	int b = 20;
	int *c;
	c = &a;
	b = reinterpret_cast<int>(*c);
	cout << p << endl << b;
}
