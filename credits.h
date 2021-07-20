#include <array>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>


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

#ifndef ASSIGN2_CREDITS_H
#define ASSIGN2_CREDITS_H

class Credits {
public:

   Credits();
   ~Credits();
   
private:
   Credits* head;

       
};

int printCredits();




#endif // ASSIGN2_CREDITS_H