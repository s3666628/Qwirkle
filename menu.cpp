// Source: https://stackoverflow.com/questions/60616203/how-can-i-make-a-function-that-prints-out-a-menu

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

#include "escapeCodeColours.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

// string player1, player2;

int mainMenu() {
    cout << "Menu" << endl;
    cout << "----" << endl;
    cout << GREEN << "1. New Game" << RESET << endl;
    cout << YELLOW_BACKGROUND << "2. Load Game" << RESET << endl;
    cout << BLUE << "3. Credits (Show student information)" << RESET << endl;
    cout << RED_BACKGROUND << "4. Quit" << RESET << endl;

    int selected = 0;
    string input;
    cin >> input;
    if (stringstream(input) >> selected) {
        return selected;
    }
    else {
        return -1;
    }
}

void start() {

}

void newGame() {
    string player1 = "";
    string player2 = "";
    cout << "Starting a New Game" << endl;
    cout << " " << endl;
    cout << "Enter a name for player 1 (uppercase characters only)" << endl;
    cin >> player1;
    cout << " " << endl;
    cout << "Enter a name for player 2 (uppercase characters only)" << endl;
    cin >> player2;
    cout << " Let's Play!" << endl;
    cout << " " << endl;
}

void credits() {
    cout << "-------------------------------------" << endl;
    cout << " Name: Philip Beeby" << endl;
    cout << " Email: s3666628@student.rmit.edu.au" << endl;
    cout << " Student ID: s3666628" << endl;
    cout << " " << endl;
    cout << " Name: Guy Leighton" << endl;
    cout << " Student ID: s3587205" << endl;
    cout << " Email: s3587205@student.rmit.edu.au" << endl;
    cout << " " << endl;
    cout << " Name: Stephen Patrikios" << endl;
    cout << " Student ID: s3852734" << endl;
    cout << " Email: s3852734@student.rmit.edu.au" << endl;
    cout << " " << endl;
    cout << " Name: Gordon Richard" << endl;
    cout << " Student ID: s3831786" << endl;
    cout << " Email: s3831786@student.rmit.edu.au" << endl;
    cout << "-------------------------------------" << endl;
}

int main() {
    int selected = -1;
    while ((selected = mainMenu()) != 4) {
        if (selected < 1 || selected > 4) {
            cout << "Sorry, that's not a valid choice." << endl;
        }
        else if (selected == 1) {
            cout << "Starting a New Game" << endl;
        }
        else if (selected == 2) {
             cout << "Enter the filename from which to load a game" << endl; 
        }
        else if (selected == 3) {
            cout << "The Team!" << endl;
            credits();
        }
        else if (selected == 4) {
            cout << "Quit" << endl;
            // this function will redisplay the menu until 4 Quit is selected
            start(); 
        }
        else {
            cout << "Sorry, that's not a valid choice." << endl;
        }
    }

    return 0;
}
