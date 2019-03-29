//search(first1, last1, first2, last2)
//This function searches for the sequence defined by first 2 and last2 in the range first1 and last1 if there is a match
//and iterator to the first element of the element in the range is returned else iterator to last1 is returned.

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	vector<int> v1 = {1,3,5,6,7};
    vector<int> v2;
    copy(v1.begin(), v1.end(), v2.begin());
    vector<int>::iterator itr;
    for(itr = v2.begin(); itr !=v2.end();itr++)
    {
        cout <<*itr << " ";
    }
}
