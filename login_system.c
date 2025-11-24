#include <stdio.h>
#include <string.h>

int main(void) {
  const char STORED_PASSWORD[] = "OmiBoy077";
  char password[20];

  printf("Welcome to Secured System.\n\n");
  printf("Enter your PASSWORD: ");
  scanf("%s", password);

  if(strcmp(password, STORED_PASSWORD) == 0) {
    printf("Access Granted to the system.");
  } else {
    printf("Access Denied to the system.");
  }
  return 0;
}