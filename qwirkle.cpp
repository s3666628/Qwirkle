
// #include "LinkedList.h"

#include <iostream>
#include "menu.h"
#include "credits.h"
//#include "Test_Obj_Creation.h" // this is for Phil's tests

// #define EXIT_SUCCESS    0

int main(void) {
   Menu selectionMenu;
   std::cout << "Welcome to Qwirkle!" << std::endl;
   std::cout << "-------------------" << std::endl;
   selectionMenu.selectionMenu();

// these are tests so please un/comment as needed
// need to include

//    testStudentCreation();
//    testTileCreation();
//    testLinkedListCreation();


   return EXIT_SUCCESS;
}
