#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  // LinkedList* colour = new LinkedList();
  vector<std::string> Items{"1. New Game", "2. Load Game", "3. Credits", "4. Quit"};

  // colour.push_back(std::move("Yellow"));
   Items.emplace_back(std::move("Yellow"));
  // an error is thrown because of the less than in: i < colour.size()
  for (int i = 0; i < (int)Items.size(); ++i)
    std::cout << Items[i] << std::endl;

  // delete colour;
}
