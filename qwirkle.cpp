
#include "LinkedList.h"

#include <iostream>
#include "Student.h"
#include "Tile.h"
#include "TileCodes.h"
#include "Test_Obj_Creation.h"

#define EXIT_SUCCESS    0

int main(void) {
   std::cout << "Welcome to Qwirkle!" << std::endl;
   std::cout << "-------------------" << std::endl;

    testStudentCreation();
    testTileCreation();
    testLinkedListCreation();



   return EXIT_SUCCESS;
}
