#include <stdio.h>
int main(void) {
  char name[25];
  printf("Welcome to printing a name using fgets and puts.\n");
  printf("Please enter your name: ");
  fgets(name, 25, stdin);

  printf("Entered name is: ");
  puts(name);
  return 0;
}