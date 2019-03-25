#include <iostream>
#include <Set>

using namespace std; 

int main()
{
	set<int, greater<int> > s;
	s.insert(7);
	s.insert(77);
	s.insert(777);
	s.insert(7777);
	s.insert(77777);
	s.insert(777777);
	s.insert(7777777);
	
	set<int> :: iterator it  = s.begin();
	for(it!=s.begin(); it!= s.end(); it++)
	cout << *it << ":";
	
	set<int> s2(s.begin(), s.end());
		set<int> :: iterator itr  = s2.begin();
		for(itr!=s2.begin(); itr!= s2.end(); itr++)
	cout << *itr << ":";
	
	
	
}
