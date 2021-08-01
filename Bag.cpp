//
// Bag.cpp
// Creates a bag which is used to hold tiles which are than taken from the Bag and placed in the players hand
//

#include "Bag.h"
#include <iostream>
#include "Tile.h"
#include "TileCodes.h"
#include <random>
#define MAX_BAG_TILES 108


Bag::Bag(){
    // default contructor
    this->gameBag = new LinkedList();

    // int counter = 0;

    // while (counter < MAX_BAG_TILES){
    //     addTilesToBag();
    //     std::cout << "Adding Tile Numer: " << counter << " to the bag: " << std::endl;
    //     ++ counter;
    // }
    // this->gameBag->printNodes();
    


}


Bag::~Bag(){
    // destructor
    std::cout << "Deleting Bag Object and Attributes: " << std::endl;
    
    delete gameBag;

}

 void Bag::addTilesToBag(Bag * gameBag){
     // add all of the starting tiles to the bag
    // Tile* randomTile = new Tile(randomColour(), randomShape());
    // this->gameBag->addFront(randomTile);
        int counter = 0;

    while (counter < MAX_BAG_TILES){
        // addTilesToBag();
        Tile* randomTile = new Tile(randomColour(), randomShape());
        std::cout << "Adding Tile Numer: " << counter << " to the bag: " << std::endl;
         gameBag->addFront(randomTile);
        ++ counter;
    }

    // gameBag->addFront(randomTile);
    
 }

Colour Bag::randomColour(){
   Colour randomColour;
   // initialise ints for the colour and shape
   int colourValue = -1;
   int min = 1;
   int max = 6;
   std::random_device engine;
   std::uniform_int_distribution<int> uniform_dist(min, max);
   colourValue = uniform_dist(engine);
   // random Colour
   if (colourValue == (1)){
       randomColour = RED;

   }
      else if (colourValue == (2)){
       randomColour = ORANGE;

   }
    else if (colourValue == (3)){
       randomColour = YELLOW;

   }
    else if (colourValue == (4)){
       randomColour = GREEN;

   }
    else if (colourValue == (5)){
       randomColour = BLUE;

   }
   else{
       randomColour = PURPLE;

   }
   std::cout << "Randomly-chosen colour: " << colourValue << std::endl;
   return randomColour;
}

   Shape Bag::randomShape(){

 Shape randomShape;
   // initialise ints for the colour and shape
   int shapeValue = -1;
   int min = 1;
   int max = 6;
   std::random_device engine;
   std::uniform_int_distribution<int> uniform_dist(min, max);
   shapeValue = uniform_dist(engine);
  // random shape
    if (shapeValue == (1)){
       randomShape = CIRCLE;

   }
      else if (shapeValue == (2)){
       randomShape = STAR_4;

   }
    else if (shapeValue == (3)){
       randomShape = DIAMOND;

   }
    else if (shapeValue == (4)){
       randomShape = SQUARE;

   }
    else if (shapeValue == (5)){
       randomShape = STAR_6;

   }
   else{
       randomShape = CLOVER;

   }
   std::cout << "Randomly-chosen shpe: " << shapeValue << std::endl;

   return randomShape;
   }
  
   
   

    // Tile* redCircle = new Tile(RED, CIRCLE);
    // Tile* orange4Star = new Tile(ORANGE, STAR_4);
    // Tile* yellowDiamond = new Tile(YELLOW, DIAMOND);
    // Tile* green6Star = new Tile(GREEN, SQUARE);
    // Tile* blueSquare = new Tile(BLUE, STAR_6);
    // Tile* purpleClover = new Tile(PURPLE, CLOVER);

    // this->gameBag->addFront(redCircle);
    // this->gameBag->addFront(orange4Star);
    // this->gameBag->addFront(yellowDiamond);
    // this->gameBag->addFront(green6Star);
    // this->gameBag->addFront(blueSquare);
    // this->gameBag->addFront(purpleClover);


 
// void Bag::setName(std::string name){
//     // update the Bag name (prolly won't need this)
//     *(this->name) = name;
    
// }
// void Bag::setBagID(std::string BagID){
//     // update the BagID (prolly won't need this)
//     *(this->BagID) = BagID;
    
// }
// void Bag::setEmail(std::string email){
//     // update the Bag email (prolly won't need this)
//     *(this->email) = email;
    
// }
// std::string Bag::getName(){
//     return *name;
    
// }
// std::string Bag::getBagID(){
//     return *BagID;
    
// }
// std::string Bag::getEmail(){
//     return *email;
    
// }

// void Bag::printBagDetails(){
//     // print out all of the attributes of a Bag
//     std::cout << "Name: " << getName() << std::endl;
//     std::cout << "Bag ID: " << getBagID() << std::endl;
//     std::cout << "Email: " << getEmail() << std::endl;
    
// }
