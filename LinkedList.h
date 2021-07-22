
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"
#include "Tile.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();
    /**
     * Add the value to the front of the Linked List
     */
    void addFront(Tile* tile);
    /**
     * print the data of all of the Nodes in the Linked List
     */
    void printNodes();

private:
   Node* head;
};




#endif // ASSIGN2_LINKEDLIST_H
