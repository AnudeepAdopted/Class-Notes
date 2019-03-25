#include<iostream>

using namespace std;

class Base
{
	public:
	void call()
	{
		cout << "call Base";	
	}	
};

class Derived : public Base
{
	public:
	void call()
	{
		cout << "Derived class";	
	}	
};

int main()
{
	Base *ptr;
	Derived d;
	ptr = &d;
	ptr->call();
	
	Base *bptr;
	Derived *dptr;
	bptr = static_cast<Base*>(dptr);
	bptr=&d;
	bptr->call();
}
