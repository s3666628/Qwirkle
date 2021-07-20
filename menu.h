#ifndef ASSIGN2_ESCAPECODECOLOURS_H
#define ASSIGN2_ESCAPECODECOLOURS_H


// Sources to make Terminal Colours
// https://stackoverflow.com/questions/9158150/colored-output-in-c
// https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
// https://www.codegrepper.com/code-examples/actionscript/ansi+colors+orange
// https://solarianprogrammer.com/2019/04/08/c-programming-ansi-escape-codes-windows-macos-linux-terminals/


// Resets everything back to the standard colour.
#define RESET   "\033[0m"
// Text Colours
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
// Background Colours
#define BLACK_BACKGROUND    "\033[40m"
#define RED_BACKGROUND      "\033[41m"
#define YELLOW_BACKGROUND   "\033[43m"
#define BLUE_BACKGROUND     "\033[44m"
#define MAGENTA_BACKGROUND  "\033[45m"


// ----------------------------------------------------------------
// enum Colour {
//     // Resets everything back to the standard colour.
//     RESET = '\033[0m'
// };
/* 
class Menu {
public:
   Menu(Colour colour, int number);
   Menu(Menu& other);
   ~Menu();

   Colour getColour();
   int getNumber();

private:
   Colour* colour;
   int* number;
};
 */

#endif // ASSIGN2_ESCAPECODECOLOURS_H