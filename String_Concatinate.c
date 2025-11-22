#include <stdio.h>
#include <string.h>

int main(void) {
  char first_name[50];
  char last_name[50];

  printf("Please enter your Name: ");
  fgets(first_name, 50, stdin);

  printf("Please enter your Sir Name: ");
  fgets(last_name, 50, stdin);

  char new_name[50];
  strcat(first_name, last_name);
  strcpy(new_name, first_name);
  printf("full name: %s", new_name);
  return 0;
}