
#include "LinkedList.h"
#include <iostream>
#include "Tile.h"

LinkedList::LinkedList() {
   this->head = nullptr;

   // TODO
}

LinkedList::~LinkedList()
{
   // deconstructor
   std::cout << "Calling Destructor to Delete all Nodes" << std::endl;
   Node *current = head;
   while (current != nullptr)
   {
      Node *next = current->next;
      delete current;
      current = next;
   }
   head = 0;
}
void LinkedList::addFront(Tile *tile)
{
   // add to the front of the linked
   // create a new Node Temp data
   Node *tmpNode = new Node(tile, nullptr);
//   // assign the value of passed in to the value of the new temp node
   tmpNode->tile = tile;
   tmpNode->next = head;
   head = tmpNode;
}

void LinkedList::printNodes()
{
//   {
//       if length of linked list is zero then loop will not run as head will be current
//       and this will be pointing to a nullptr
      unsigned int count = 0;
      Node *current = head;
//      // look unit we get to the tail node
      while (current != nullptr)
      {
         std::cout << "Value of node at position: "
          << count << " : "
          << current->tile->getTileColour()
          << current->tile->getTileShape()
          << std::endl;
         ++count;
         current = current->next;
      }
//   }
}
