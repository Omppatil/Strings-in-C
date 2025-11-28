#include <stdio.h>
#include <string.h>

int main(void) {
  const char Stored_Password[] = "Password07";
  char Password[20];
  printf("Welcome to Password Protected system.\n");

  do {
    printf("\nPlease enter valid password: ");
    scanf("%s", Password);
  } while(strcmp(Password, Stored_Password) != 0);

  printf("Access Granted!!");
  return 0;
}