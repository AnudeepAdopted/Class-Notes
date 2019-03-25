#include<iostream>
#include<typeinfo>

using namespace std;
class Person
{
	public:
		virtual ~Person()
		{
			cout << "Des called";
		}
	virtual void ride()
	{
		cout << "riding";
	}
};

class Employee: public Person
{
	public:
		void ride()
		{
			cout << "Ride emp";
		}
};

int main()
{
	int *i = 0;
	Employee e;
	Person *p;
	p = &e;
	p->ride();
	cout << typeid(i).name() << endl;
}
