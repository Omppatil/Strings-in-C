#include <stdio.h>
#include <string.h>

int main(void) {
  char name[50];

  printf("Please enter your Name: ");
  fgets(name, 50, stdin);

  int len = strlen(name);
  printf("The length of your name: %d", len);
  return 0;
}