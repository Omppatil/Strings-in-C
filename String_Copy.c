#include <stdio.h>
#include <string.h>

int main(void) {
  char name[50];
  char new_name[50];
  printf("Please enter your Name: ");
  fgets(name, 50, stdin);
  
  strcpy(new_name, name);
  printf("copied name is:  %s", new_name);
  return 0;
}