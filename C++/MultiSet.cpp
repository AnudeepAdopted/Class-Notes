#include <iostream>
#include <Set>

using namespace std;

int main()
{
	multiset<int> m1;
	m1.insert(7);
	m1.insert(17);	
	m1.insert(7);
	
	multiset<int> :: iterator itr, itr2, itr3;
	cout << "First multiset elements: " <<endl;
	for(itr = m1.begin(); itr!=m1.end(); itr++)
	cout << *itr <<endl;
	
	multiset<int> m2(m1.begin(), m1.end());
	
	for(itr = m2.begin(); itr!=m2.end(); itr++)
	cout << *itr <<endl;
	
	m2.erase(7);
	
	for(itr = m2.begin(); itr!= m2.end(); itr++)
	cout << *itr << endl;
	
	m2.erase(m2.begin(), m2.find(17));
	
	for(itr = m2.begin(); itr!= m2.end(); itr++)
	cout << *itr << endl;


	
	for(itr = m2.begin(); itr!= m2.end(); itr++)
	cout << *itr << endl;
}
