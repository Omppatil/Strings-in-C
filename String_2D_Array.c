#include <stdio.h>
#include <string.h>

int main(void) {
  char str[4][50] = {"Om", "Niraj", "Pragati", "Neha"};
  printf("Printing Names one by one: \n");
  for(int i = 0; i < 4; i++) {
    puts(str[i]);
  }

  printf("Printing Names characters one by one: \n");
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < strlen(str[i]); j++) {
      printf("%c", str[i][j]);
    }
    printf("\n");
  }
  
  printf("Modified Names one by one: \n");
  str[0][0] = 'D';
  str[1][0] = 'S';
  str[2][0] = 'A';
  str[3][0] = 'J';
  
  for(int i = 0; i < 4; i++) {
    puts(str[i]);
  }

  return 0;
}