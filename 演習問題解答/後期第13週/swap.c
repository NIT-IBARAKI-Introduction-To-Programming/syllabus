#include <stdio.h>

int main() {
  // 1. 
  int numbers[2];
  // 2. 
  printf("値：\n");
  scanf("%d", &numbers[0]);
  scanf("%d", &numbers[1]);
  // 3. 
  printf("numbers[0]: %d\n", numbers[0]);
  printf("numbers[1]: %d\n", numbers[1]);
  // 4. 
  int tmp;
  tmp = numbers[0];
  numbers[0] = numbers[1];
  numbers[1] = tmp;
  // 5. 
  printf("numbers[0]: %d\n", numbers[0]);
  printf("numbers[1]: %d\n", numbers[1]);
  
  return 0;
}
