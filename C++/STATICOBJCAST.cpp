#include<iostream>

using namespace std;

class A
{
	public:
		virtual void fun()
		{
			cout << "A has fun";
		}
};

class B : public A
{
	public:
		void fun()
		{
			cout << "B has fun";
		}
};

int main()
{
	A *ptr;
	B b;
	ptr = &b;
	ptr->fun();
	A *aptr;
	B *bptr;
	aptr = static_cast<A*>(bptr);
	aptr = &b;
	aptr->fun();
}
