/*
1.Write a std::vector<vector<State>> Search function stub which takes a board grid and two length 2 int arrays as
arguments. The int arrays will represent the start and goal coordinates for the search. The function should print
""No path found!" and return an empty std::vector<vector<State>>. The function will later return the board with a
path from the start to the goal.

2.In main(), call Search with a start of {0, 0} and a goal of {4, 5}. Store the results in the variable solution.

3.Pass solution to PrintBoard.
*/

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
using std::abs;

enum class State {kEmpty, kObstacle};

vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ',') {
      if (n == 0) {
        row.push_back(State::kEmpty);
      } else {
        row.push_back(State::kObstacle);
      }
    }
    return row;
}

vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<State>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

// TODO: Write the Search function stub here.
vector<vector<State>> Search(const vector<vector<State>>, int init[2], int goal[2]){
  vector<vector<State>> v;
  cout<<"No path found!"<<"\n";
  return v;
}

string CellString(State cell) {
  switch(cell) {
    case State::kObstacle: return "⛰️   ";
    default: return "0   "; 
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Declare "init" and "goal" arrays with values {0, 0} and {4, 5} respectively.
  int init[2] = {0, 0};
  int goal[2] = {4, 5};
  auto board = ReadBoardFile("1.board");
  // TODO: Call Search with "board", "init", and "goal". Store the results in the variable "solution".
  vector<vector<State>> solution;
  solution = Search(board, init, goal);
  // TODO: Change the following line to pass "solution" to PrintBoard.
  PrintBoard(solution);
}