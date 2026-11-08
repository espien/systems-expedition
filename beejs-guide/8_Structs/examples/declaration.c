// Often globally available
struct car {
  char *name;
  float price;
  int speed;
};

int main(void) {
  struct car toyota; // Full type is `struct car`, not just `car`. The latter
                     // wouldn't work.
  toyota.name = "Avensis";
  toyota.price = 15000.00;
  toyota.speed = 150;

  // Now with an initializer! Same field order as in the struct declaration:
  struct car saturn = {"Saturn SL/2", 16000.99, 175};

  // Missing field designators are initialized to zero
  struct car fiat = {.speed = 140, .name = "Punto"}

  struct car a,
             b;

  b = a; // Copy the struct
}