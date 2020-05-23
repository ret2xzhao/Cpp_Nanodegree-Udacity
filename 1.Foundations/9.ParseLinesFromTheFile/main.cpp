/*
Write a vector<int> ParseLine function which accepts a string as an argument. Use std::istringstream 
to parse the line by comma chars, and store the ints in a vector<int>. ParseLine should return the
vector after parsing.

Note: you will need to #include <sstream> to use istringstream. Additionally, you may want to add
using std::istringstream; to your program. Finally, remember that each line of the board will look
something like: 1,0,0,0,0,, so you may want to stream an int and a char with each pass through a
while loop.
*/

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;

// TODO: Add the ParseLine function here.
vector<int> ParseLine(const string &line){
    vector<int> row;
    istringstream myStream(line);
    char c;
    int n;
    while ((myStream >> n >> c) && c==',') {
        row.push_back(n);
    }
    return row;
}

void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

#include "test.cpp" // For testing.

int main() {
  ReadBoardFile("1.board");
  TestParseLine(); // For testing.
  // Leave commented out.
  // PrintBoard(board);
}