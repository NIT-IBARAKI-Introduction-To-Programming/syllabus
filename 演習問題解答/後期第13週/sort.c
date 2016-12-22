#include <stdio.h>

int main() {
  // 1. 
  int numbers[3];
  // 2. 
  printf("値を3つ入力：\n");
  scanf("%d", &numbers[0]);
  scanf("%d", &numbers[1]);
  scanf("%d", &numbers[2]);
  // 3. 
  printf("並べ替え前：\n");
  printf("numbers[0]: %d\n", numbers[0]);
  printf("numbers[1]: %d\n", numbers[1]);
  printf("numbers[2]: %d\n", numbers[2]);
  // 4. 
  int tmp;
  // numbers[0]とnumbers[1]の比較
  if (numbers[0] > numbers[1]) {
    tmp = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = tmp;
  }
  // numbers[0]とnumbers[2]の比較
  if (numbers[0] > numbers[2]) {
    tmp = numbers[0];
    numbers[0] = numbers[2];
    numbers[2] = tmp;
  }
  // numbers[1]とnumbers[2]の比較
  if (numbers[1] > numbers[2]) {
    tmp = numbers[1];
    numbers[1] = numbers[2];
    numbers[2] = tmp;
  }
  // 5. 
  printf("並べ替え後：\n");
  printf("numbers[0]: %d\n", numbers[0]);
  printf("numbers[1]: %d\n", numbers[1]);
  printf("numbers[2]: %d\n", numbers[2]);
  
  return 0;
}
