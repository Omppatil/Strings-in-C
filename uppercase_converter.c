#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char text[100];
  printf("Welcome to Text uppercase converter.\n\n");
  printf("Please enter your text: ");
  fgets(text, sizeof(text), stdin);

  //for(int i = 0; text[i] != '\0'; i++) {
  for(int i = 0; i < strlen(text); i++) {
    text[i] = toupper(text[i]);
  }
  printf("Converted text is:\n%s", text);
  return 0;
}