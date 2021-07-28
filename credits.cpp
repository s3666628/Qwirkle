#include <cstdio>
#include <iostream>

#include "credits.h"
#include "menu.h"

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
  return EXIT_SUCCESS;
};