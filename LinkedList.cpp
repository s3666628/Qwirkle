
#include "LinkedList.h"
#include <iostream>
#include "Tile.h"

LinkedList::LinkedList()
{
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

void LinkedList::addBack(Tile *tile)
{
   // node that we want to add needs to point to nullptr as we want to add it to the end of the linked list
   // and last node always points to nullptr
   Node *toAdd = new Node();
   toAdd->tile = tile;

   if (head == nullptr)
   {
      head = toAdd;
   }
   else
   {
      Node *current = head;

      while (current->next != nullptr)
      {
         current = current->next;
      }
      current->next = toAdd;
   }
}

void LinkedList::removeFront()
{
   // removes the first node in the list
   if (this->head == NULL)
   {
      std::cout << "List was empty so cannot remove from front!" << std::endl;
      return;
   }
   else
   {
      //create a temp node and assign it the head
      // so now temp node annd head are the same
      // head is a pointer to the first node in the list that we want to remove
      Node *tmpNode = head;
      // move the head to point to the next node in the list
      head = head->next;
      delete tmpNode;
   }
}

unsigned int LinkedList::listSize() const
{
   // if length of linked list is zero then loop will not run as head will be current
   // and this will be pointing to a nullptr
   unsigned int count = 0;
   Node *current = head;
   while (current != nullptr)
   {
      ++count;
      current = current->next;
   }

   return count;
}

Tile LinkedList::get(unsigned int index) const
{

   unsigned int count = 0;
   Node *current = head;
   // need to make sure that value given is zero or greater
   // int returnValue = std::numeric_limits<int>::min();
   // if (index >= 0 && index < size()) // can get rid of this now we changed it to unsigned
   Tile *returnValue = current->tile;
   if (index < listSize())
   {
      while (count < index)
      {
         ++count;
         current = current->next;
      }
      returnValue = current->tile;
   }
   else
   {
      // in c++ can throw any object as an exception
      // find the most relevant error from the base Exception class
      // find the constructor to create an object of that type of object that want to throw
      throw std::out_of_range("Linked List get - index out of range");
   }
   return *returnValue;
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