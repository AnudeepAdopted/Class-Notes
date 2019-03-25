// Algorithms:
// STL provides diffrent types of algorithms that can be implemented upon any of the container with the help of iterators, we dont have to define complex algorithm instead we jsut use built in functions provided by the algorithm library. There are diffrent types of algorithms in STL. They are:
// 1) Sorting algorithms
// 2) Non-modifying algorithms
// 3) Mutating algothims
// 4) Numeric algorithms

// Sorting algorithms - 
// 1) sort()
// 2) is_sorted()
// 3) partial_sort()

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

bool compare_function(int i, int j)
{
    return i > j;
}

bool compare_string(string i, string j)
{
    return (i.size() < j.size());
}

int main()
{
    int v[] = {1,5,7,4,3,2,1,5};
    cout << is_sorted(v,v + 8) << endl;
    partial_sort(v, v+4, v+8);
    
    for(int i = 0; i < 8; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> v1;
    cout << is_sorted(v,v + 8) << endl;
    v1.push_back(19);
    
    vector<int>::iterator i,j;
    
    i = v1.begin();
    j = v1.end();
    
    
    sort(i,j);
}