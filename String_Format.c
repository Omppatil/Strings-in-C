#include <stdio.h>

int main(void) {
  char str[50];
  printf("Please Enter your Name: ");
  scanf("%s", str);

  printf("My Name is %s", str);
  return 0;
}