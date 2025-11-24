#include <stdio.h>

int main(void) {
  char day[10];
  char month[5];
  int year;

  printf("Welcome to printing current date.\n");
  printf("Please enter the current day: ");
  scanf("%s", day);
  printf("Now, enter the current month: ");
  scanf("%s", month); 
  printf("Finally, enter the current year: ");
  scanf("%d", &year);

  printf("\nFormat for Current Date: %s/%s/%04d", day, month, year);
  return 0;
}