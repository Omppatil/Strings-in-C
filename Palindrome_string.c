#include <stdio.h>
#include <string.h>

int palindrome_string(char str[]);

int main(void) {
  char str[20];
  printf("welcome to Palindrome checker.\n");
  printf("Enter your string: ");
  scanf("%s", str);

  if(palindrome_string(str) == 1) {
    printf("String is Palindrome.");
  }
  else {
    printf("String is not Palindrome.");
  }
  return 0;
}

int palindrome_string(char str[]) {
  int len = strlen(str);
  for(int i = 0; i < len / 2; i++) {
    if(str[i] != str[len - 1 - i]) {
      return 0;
    }
  }
  return 1;
}