/*
1.Write a void PrintBoard function. The function should accept the board as an argument.
The function should print each row of the board with a newline "\n".

2.When you have written your PrintBoard function, call it from within main() to print the board.
*/

#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.
void PrintBoard(const vector<vector<int>> &v){
  for(const vector<int> &i: v){
    for(const int &j: i){
      cout<<j;
    }
    cout<<"\n";
  }
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);
}