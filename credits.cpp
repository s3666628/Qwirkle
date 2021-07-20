#include <iostream>
#include <cstdio>

#include "menu.h"
#include "credits.h"

using std::cin;
using std::cout;
using std::endl;

int printCredits() {
  // Source:
  // https://www.programiz.com/cpp-programming/library-function/cstdio/fopen
  int c;
  FILE *credits;
  credits = fopen("credits.txt", "r");
  if (credits) {
    while ((c = getc(credits)) != EOF)
      putchar(c);
    fclose(credits);
  }
  return 0;
};