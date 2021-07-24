// Sources to make Terminal Colours
// https://stackoverflow.com/questions/9158150/colored-output-in-c
// https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
// https://www.codegrepper.com/code-examples/actionscript/ansi+colors+orange
// https://solarianprogrammer.com/2019/04/08/c-programming-ansi-escape-codes-windows-macos-linux-terminals/
// https://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/

#include <iostream>
#include <sstream>
#include <vector>

#include "credits.h"
#include "menu.h"

int length = 0;
Menu::Menu() {}
Menu::~Menu() { clear(); }

// Returns the current size of the Menu
int Menu::size() { return length; }

// Removes all menu items from the Menu
void Menu::clear() {
  for (int i = 0; i != length; ++i) {
    delete menuList[i];
    menuList[i] = nullptr;
  }
}
// There chars add the User Prompt after the menu (Section 2.4)
char g = '>';
char s = ' ';

int mainMenu() {
  // Reference:
  // https://stackoverflow.com/questions/60616203/how-can-i-make-a-function-that-prints-out-a-menu
  // Declaring Vector of String type
  // Values can be added here using initialise-list syntax
  // std::vector<std::string> menuList{"1. New Game", "2. Load Game", "3.
  // Credits",
  //                              "4. Quit"};

  // Strings can be added at any time with emplace_back
  // Should this way be used from a memory usage point of view?
  // Or is line 39 better?
  std::vector<std::string> menuList{"1.New Game"};
  menuList.emplace_back(std::move("2. Load Game"));
  menuList.emplace_back(std::move("3. Credits"));
  menuList.emplace_back(std::move("4. Quit"));

  // Print Strings stored in Vector
  // The Menu is coloured only for testing purposes
  // We can use this for loop instead of the colours
  /* std::cout << "Menu" << std::endl;
 std::cout << "----" << std::endl;
 for (size_t i = 0; i < menuList.size(); ++i) {
     std::cout << menuList[i] << std::endl;
   }  */
  std::cout << CYAN << "Menu" << std::endl;
  std::cout << "----" << std::endl;
  std::cout << GREEN << menuList[0] << RESET << std::endl;
  std::cout << YELLOW_BACKGROUND << menuList[1] << RESET << std::endl;
  std::cout << BLUE << menuList[2] << RESET << std::endl;
  std::cout << RED_BACKGROUND << menuList[3] << RESET << std::endl;
  std::cout << g << s;

  int selected = 0;
  std::string input;
  std::cin >> input;
  if (std::stringstream(input) >> selected) {
    return selected;
  } else {
    // I think this return 0; adds a 0 to the end of the Credits if you select 3
    // from the menu list. Not sure why or how to make it disappear.
    return 0;
  }
};

// this function will redisplay the menu until 4 Quit is selected
void start(){

};

void newGame() {
  // These are only initialised for testing purposes
  // They should come from the Player files
  std::string player1 = "";
  std::string player2 = "";
  std::vector<std::string> gameList{
      "Starting a New Game",
      "Enter a name for player 1 (uppercase characters only)",
      "Enter a name for player 2 (uppercase characters only)", "Let's Play!"};

  // Print Strings stored in Vector
  std::cout << gameList[0] << std::endl;
  std::cout << " " << std::endl;
  std::cout << gameList[1] << std::endl;
  std::cin >> player1;
  // this will convert the user input to uppercase
  // I'm not sure about casting it as an int though.
  for (int i = 0; i < (int)player1.size(); ++i) {
    player1[i] = toupper(player1[i]);
  }
  std::cout << " " << std::endl;
  std::cout << gameList[2] << std::endl;
  std::cin >> player2;
  // this will convert the user input to uppercase
  // I'm not sure about casting it as an int though.
  for (int i = 0; i < (int)player2.size(); ++i) {
    player2[i] = toupper(player2[i]);
  }
  std::cout << gameList[3] << std::endl;
  std::cout << " " << std::endl;
};

int main() {
  int selected = -1;
  while ((selected = mainMenu()) != 4) {
    if (selected < 1 || selected > 4) {
      std::cout << "Sorry, that's not a valid choice." << std::endl;
    } else if (selected == 1) {
      std::cout << "Starting a New Game" << std::endl;
      std::cout << "-------------------" << std::endl;
      newGame();
    } else if (selected == 2) {
      std::cout << "Enter the filename from which to load a game" << std::endl;
    } else if (selected == 3) {
      std::cout << "The Team!" << std::endl;
      std::cout << printCredits() << std::endl;
    } else if (selected == 4) {
      std::cout << "Quit" << std::endl;
      // this function will redisplay the menu until 4 Quit is selected
      start();
    } else {
      std::cout << "Sorry, that's not a valid choice." << std::endl;
    }
  }
  return 0;
}