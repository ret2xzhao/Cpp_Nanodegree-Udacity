#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.
int AdditionFunction(const vector<int> &v)
{
    int sum = 0;
    for(const int &i : v)
        sum += i;
    return sum;
}

/*

int AdditionFunction(const vector<int> &v)
{
    int sum = 0;
    for(auto i = v.begin(); i != v.end(); ++i)
        sum += *i;
    return sum;
}

#include <numeric>
int AdditionFunction(const vector<int> &v)
{
    return std::accumulate(v.begin(), v.end(), 0);
}

*/
int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}