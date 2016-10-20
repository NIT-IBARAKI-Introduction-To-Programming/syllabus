#include <stdio.h>

int main(void) {
  int i;
  int number;
  printf("整数を入力してください。\n");
  scanf("%d", &number);
  for(i=1; i<=number; i++) {
    printf("%d * %d = %d\n", i, i, i*i);
  }
  return 0;
}
