/*
1.In the main function, declare a variable board as a vector of vectors of ints: vector<vector<int>>.

2.Assign this data to the board variable:
{{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}}
*/

#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
  // TODO: Declare a "board" variable here, and store
  // the data provided above.
  vector<vector<int>> board;
  board = {{0, 1, 0, 0, 0, 0},
           {0, 1, 0, 0, 0, 0},
           {0, 1, 0, 0, 0, 0},
           {0, 1, 0, 0, 0, 0},
           {0, 0, 0, 0, 1, 0}};
  for(int i=0; i<5; i++){
    for(int j=0; j<6; j++){
      cout<< board[i][j] <<" ";
    }
    cout<<"\n";
  }
  cout << "Hello!" << "\n";
}