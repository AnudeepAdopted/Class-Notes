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

	s.erase(7);
	cout << s.lower_bound(14);
	cout << s.upper_bound(14);
	
	cout << s.size() << endl << s.max_size();
	
	
}

