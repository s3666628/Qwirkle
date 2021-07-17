#ifndef ASSIGN2_ESCAPECODECOLOURS_H
#define ASSIGN2_ESCAPECODECOLOURS_H

// ----------------------------------------------------------------------------
// Source to make Terminal Colours
// https://stackoverflow.com/questions/9158150/colored-output-in-c
// also https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"
//Regular background
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"





// https://solarianprogrammer.com/2019/04/08/c-programming-ansi-escape-codes-windows-macos-linux-terminals/
// enum Colours {
//  	RESET_COLOUR,
//  	BLACK_TXT = 30,
//  	RED_TXT,
//  	GREEN_TXT,
//  	YELLOW_TXT,
//  	BLUE_TXT,
//  	MAGENTA_TXT,
//  	CYAN_TXT,
//  	WHITE_TXT,
 
//  	BLACK_BKG = 40,
//  	RED_BKG,
//  	GREEN_BKG,
//  	YELLOW_BKG,
//  	BLUE_BKG,
//  	WHITE_BKG,	
//  	MAGENTA_BKG,
//  	CYAN_BKG,
// };

/* static inline void setTextColour(int code) {
    printf("\x1b[%dm", code);
}

static inline void setTextColourBright(int code) {
    printf("\x1b[%d;1m", code);
}

static inline void setBackgroundColour(int code) {
    printf("\x1b[%dm", code);
}

static inline void setBackgroundColourBright(int code) {
    printf("\x1b[%d;1m", code);
}

static inline void resetColor(void) {
    printf("\x1b[%dm", RESET_COLOUR);
} */
// -----------------------------------------------------------------

#endif // ASSIGN2_NODE_H