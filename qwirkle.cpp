
#include "LinkedList.h"

#include <iostream>
#include "Student.h"

#define EXIT_SUCCESS    0

int main(void) {
   LinkedList* list = new LinkedList();
   delete list;

   std::cout << "TODO: Implement Qwirkle soon!!" << std::endl;
    //Student Testing - can move this test somewhere else when the time comes
    // testing that we can create a new student
    std::cout << "Creating a new Test Student 01" << std::endl;
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
    
    

   return EXIT_SUCCESS;
}