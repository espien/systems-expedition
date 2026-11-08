#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

// Incorrect
void set_price(struct car *c, float new_price) {
  c.price = new_price; // ERROR!! The dot operator only works on structs, not on
                       // pointers to structs
}

// Correct 1. (Dereferencing the variable c)
void set_price(struct car *c, float new_price) {
  // (*c).price = new_price;  // Works, but non-idiomatic :(
  //
  // The line above is 100% equivalent to the one below:

  c->price = new_price; // That's the one!
}

int main(void) {
  struct car saturn = {.speed = 175, .name = "Saturn SL/2"};

  // Pass a pointer to this struct car, along with a new,
  // more realistic, price:
  set_price(&saturn, 799.99);

  printf("Price: %f\n", saturn.price);
}