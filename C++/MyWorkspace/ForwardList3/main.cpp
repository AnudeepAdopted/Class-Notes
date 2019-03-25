#include<iostream>
using namespace std;
template<class t>
class node
{
	public:
	node<t> *link;
	t data;
};
template<class t>
class mystack
{
   node<t> *top;
	public:
		mystack();
		void push(t ele);
		int pop(t &ele);
		void display();
};
template<class t>
mystack<t>::mystack()
{
	top=0;
}
template<class t>
void mystack<t>::push(t ele)
{ 
    node<t> *nn;
	if(top==0)
	{
		
		nn->data=ele;
		nn->link=top;
	}
	else{
		
		nn->data=ele;
		nn->link=top;
		top=nn;
	}
}
template<class t>
void mystack<t>::display()
{
	node<t> *temp;
	temp=top;
	cout<<"hi";
	while(temp!=0)
	{
	cout<<"boby";
		cout<<temp->data;
		temp=temp->link;
	}
}
int main()
{
	mystack<int> ms;
	int ele;
	cout<<"enter ele";
	cin>>ele;
    
	ms.push(ele);
	ms.display();
}