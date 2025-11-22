#include <stdio.h>
#include <string.h>

int main(void) {
  int result = strcmp("Banana", "Apple");
  printf("Comparing Banana and Apple: %d\n", result);
  
  result = strcmp("Apple", "Banana");
  printf("Comparing Apple and Banana: %d\n", result); 

  result = strcmp("Banana", "Banana");
  printf("Comparing Banana and Banana: %d\n", result);
  return 0;
}