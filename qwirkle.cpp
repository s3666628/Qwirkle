
// #include "LinkedList.h"

#include <iostream>
/* #include "Student.h"
#include "Tile.h"
#include "TileCodes.h" */
#include "menu.h"
#include "credits.h"
// #include "TileCodes.h"
// #include "Test_Obj_Creation.h"

// #define EXIT_SUCCESS    0

void selectionMenu();

int main(void) {
/*    LinkedList* list = new LinkedList();
   delete list; */
   std::cout << "Welcome to Qwirkle!" << std::endl;
   std::cout << "-------------------" << std::endl;
   selectionMenu();
    //Student Testing - can move this test somewhere else when the time comes
    // testing that we can create a new student
    /* std::cout << "Creating a new Test Student 01" << std::endl;
    Student* phil = new Student("Philip Beeby", "S3666628", "s3666628@student.rmit.edu.au");
    std::cout << "Printing out Test Student 01 -  name: " << phil->getName() << std::endl;
    std::cout << "Printing out Test Student 01 -  StudentID: " << phil->getstudentID()<< std::endl;
    std::cout << "Printing out Test Student 01 -  email: " << phil->getEmail()<< std::endl;
    std::cout << "Updating details of Test Student 01 to test Setter methods" << std::endl;
    phil->setName("Paul");
    phil->setstudentID("S366225");
    phil->setEmail("paul.beeby@mac.com.au");
    std::cout << "Printing out the student details" << std::endl;
    phil->printStudentDetails();
    std::cout << "Deleting Test Student 01 from Heap: " << std::endl;
    
    delete phil;
    
    // testing new shape
    std::cout << "Creating a new Tiles" << std::endl;
    Tile* redCircle = new Tile(RED, CIRCLE);
    Tile* orange4Star = new Tile(ORANGE, STAR_4);
    Tile* yellowDiamond = new Tile(YELLOW, DIAMOND);
    Tile* green6Star = new Tile(GREEN, SQUARE);
    Tile* blueSquare = new Tile(BLUE, STAR_6);
    Tile* purpleClover = new Tile(PURPLE, CLOVER);
    std::cout << "New Tile 1 Created: Red Circle: " << redCircle->getTileColour() << redCircle->getTileShape()<< std::endl;
    std::cout << "New Tile 2 Created: Orange 4 Star: " << orange4Star->getTileColour() << orange4Star->getTileShape()<< std::endl;
    std::cout << "New Tile 3 Created: Yellow Diamond: " << yellowDiamond->getTileColour() << yellowDiamond->getTileShape()<< std::endl;
    std::cout << "New Tile 4 Created: Green 6 Star: " << green6Star->getTileColour() << green6Star->getTileShape()<< std::endl;
    std::cout << "New Tile 5 Created: Blue  Square: " << blueSquare->getTileColour() << blueSquare->getTileShape()<< std::endl;
    std::cout << "New Tile 6 Created: Purple Clover: " << purpleClover->getTileColour() << purpleClover->getTileShape()<< std::endl;
    // memory clean up
    delete redCircle;
    delete orange4Star;
    delete yellowDiamond;
    delete green6Star;
    delete blueSquare;
    delete purpleClover;     
   std::cout << "Welcome to Qwirkle!" << std::endl;
   std::cout << "-------------------" << std::endl;

    testStudentCreation();
    testTileCreation();
    testLinkedListCreation();



   return EXIT_SUCCESS;*/
}