#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Add your code here.
    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for (vector<int> i: b) {
        for (int j: i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}