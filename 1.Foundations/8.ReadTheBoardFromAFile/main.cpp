/*
1.Write a function void ReadBoardFile which reads lines from a file. Write each line to cout, followed by a newline character "\n".
The function should accept a string argument, which represents the path to the file. For now, since ReadBoardFile does not need to 
return anything, you can use a void return type.

2.Call ReadBoardFile from main using the argument "1.board".

Note: you will need to include the fstream class, and you may want to have using std::ifstream to use the ifstream object without 
having to write std:: in the rest of your code.
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cout;
using std::string;
using std::vector;
using std::ifstream;

// TODO: Add the ReadBoardFile function here.
void ReadBoardFile(const string &path){
    ifstream my_file;
    my_file.open(path);
    if (my_file) {
        string line;
        while (getline(my_file, line)) {
            cout << line << "\n";
        }
    }
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Call the ReadBoardFile function here.
  ReadBoardFile("1.board");
  // Leave the following line commented out.
  //PrintBoard(board);
}