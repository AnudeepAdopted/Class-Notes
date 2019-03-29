//Equal(first1, last1,first1);
//This function compares for the equality of elements in the range pointed by first1 and last1 excluded to the range
//with starting position + 2. If all elements are equal true is returned or if false.

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a1[] = {1,2,3,5,6,5,2,1,3,5};
    int a2[] = {1,2,3,5,6,5,2,1,3,5};
    vector<int> v1 (a1, a1 + 9);
    vector<int> v2 (a2, a2 + 9);
    cout << equal(v1.begin(), v1.end(), v2.begin());
}
