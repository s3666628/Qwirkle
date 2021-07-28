#ifndef ASSIGN2_CREDITS_H
#define ASSIGN2_CREDITS_H

int printCredits();

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
  Credits *credits;
};

#endif // ASSIGN2_CREDITS_H