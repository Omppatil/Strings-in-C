#include <stdio.h>
#include <string.h>

void reverse_string(char str[]);

int main(void) {
  char str[100];
  printf("welcome to reversing the string.\n");
  puts("Enter the string: ");
  fgets(str, sizeof(str), stdin);
  puts("string before reversing: ");
  puts(str);
  reverse_string(str);
  puts("String after reversing: ");
  puts(str);
  return 0;
}

void reverse_string(char str[]) {
  int length = strlen(str);
  for(int i = 0; i < length / 2; i++) {
    int temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
}