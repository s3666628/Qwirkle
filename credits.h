#ifndef ASSIGN2_CREDITS_H
#define ASSIGN2_CREDITS_H

class Credits {
public:
  Credits(int value);
  // Copy constructor
  Credits(Credits &other);
  // Move constructor
  Credits(Credits &&other);
  // Deconstructor
  ~Credits();

private:
  Credits *head;
};

int printCredits();

#endif // ASSIGN2_CREDITS_H