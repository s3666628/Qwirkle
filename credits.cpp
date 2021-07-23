#include <cstdio>
#include <iostream>

#include "credits.h"
#include "menu.h"

using std::cin;
using std::cout;
using std::endl;

int printCredits() {
  // Reference:
  // https://www.programiz.com/cpp-programming/library-function/cstdio/fopen
  int c;
  FILE *credits;
  credits = fopen("credits.txt", "r");
  if (credits) {
    while ((c = getc(credits)) != EOF)
      putchar(c);
    fclose(credits);
  }
  // I think this, or in the menu.cpp, file return 0; adds a 0 to the end of the
  // Credits if you select 3 from the menu list. Not sure why or how to make it
  // disappear.
  return 0;
};