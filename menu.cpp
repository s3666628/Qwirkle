// Sources to make Terminal Colours
// https://stackoverflow.com/questions/9158150/colored-output-in-c
// https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
// https://www.codegrepper.com/code-examples/actionscript/ansi+colors+orange
// https://solarianprogrammer.com/2019/04/08/c-programming-ansi-escape-codes-windows-macos-linux-terminals/
// https://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/

#include <array>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>

#include "credits.h"
#include "menu.h"

using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::string;
using std::stringstream;
using std::vector;

// string player1, player2;

#define MAX_TILES_IN_BAG 106
#define MAX_TILES_TO_START 6

int mainMenu() {
  // Declaring Vector of String type
  // Values can be added here using initialise-list syntax
  // vector<std::string> menuList{"1. New Game", "2. Load Game", "3. Credits",
  //                              "4. Quit"};

  // Strings can be added at any time with push_back
  //Should this way be used from a memory usage point of view?
  // Or is line 39 better?
  vector<std::string> menuList{"1.New Game"};
  menuList.push_back(std::move("2. Load Game"));
  menuList.push_back(std::move("3. Credits"));
  menuList.push_back(std::move("4. Quit")); 

  // Print Strings stored in Vector
  /* for (int i = 0; i < (int)menuList.size(); ++i)
    cout << menuList[i] << endl; */
  //}
  // int mainMenu() {
  cout << "Menu" << endl;
  cout << "----" << endl;
  cout << GREEN << menuList[0] << RESET << endl;
  cout << YELLOW_BACKGROUND << menuList[1] << RESET << endl;
  cout << BLUE << menuList[2] << RESET << endl;
  cout << RED_BACKGROUND << menuList[3] << RESET << endl;

  int selected = 0;
  string input;
  cin >> input;
  if (stringstream(input) >> selected) {
    return selected;
  } else {
    return -1;
  }
};
void start(){

};

void newGame() {
  string player1 = "";
  string player2 = "";
  vector<std::string> gameList{
      "Starting a New Game",
      "Enter a name for player 1 (uppercase characters only)",
      "Enter a name for player 2 (uppercase characters only)", "Let's Play!"};

  // Print Strings stored in Vector
  cout << gameList[0] << endl;
  cout << " " << endl;
  cout << gameList[1] << endl;
  cin >> player1;
  cout << " " << endl;
  cout << gameList[2] << endl;
  cin >> player2;
  cout << gameList[3] << endl;
  cout << " " << endl;
};

int main() {
  int selected = -1;
  while ((selected = mainMenu()) != 4) {
    if (selected < 1 || selected > 4) {
      cout << "Sorry, that's not a valid choice." << endl;
    } else if (selected == 1) {
      cout << "Starting a New Game" << endl;
      cout << "-------------------" << endl;
      newGame();
    } else if (selected == 2) {
      cout << "Enter the filename from which to load a game" << endl;
    } else if (selected == 3) {
      cout << "The Team!" << endl;
      cout << printCredits() << endl;
    } else if (selected == 4) {
      cout << "Quit" << endl;
      // this function will redisplay the menu until 4 Quit is selected
      start();
    } else {
      cout << "Sorry, that's not a valid choice." << endl;
    }
  }

  return 0;
}
int length = 0;
Menu::Menu(){
    
}
Menu::~Menu(){
    clear();
}
/**
* Return the current size of the Deck.
*/
int Menu::size(){
    return length;
}
/**
* Removes all cards from the deck.
* Delete these card
*/
void Menu::clear(){
    for (int i = 0; i != length; ++i) {
      delete menuList[i];
      menuList[i] = nullptr;
   }
} 