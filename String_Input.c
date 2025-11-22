#include <stdio.h>

int main(void) {
  char name[100];

  printf("Please enter your Full Name: ");
  fgets(name, sizeof(name), stdin);/* Uses when you want to 
                                        write your Full name with white spaces */
  printf("My Full Name is: ");
  puts(name);
  return 0;
}