#include <stdio.h>
#include <string.h>

int main(void) {
  const char Exit[] = "exit";
  char command[20];
  printf("Welcome to Loop exit System.\n");

  while(1) {
    printf("\nEnter your command: ");
    scanf("%s", command);
    if(strcmp(command, Exit) == 0) {
      break;
    }
  }
  printf("\nLoop exited successfully!!");
  return 0;
}