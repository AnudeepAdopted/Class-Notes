//1) count()
//2) equal()
//3) mismatch()
//4) search_n()
//Count - Count returns the no of elemets in the 
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int a[] = {1,2,3,5,6,5,2,1,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout << n << endl;
    cout << count(a, a + n, 5) << endl;
	return 0;
}
