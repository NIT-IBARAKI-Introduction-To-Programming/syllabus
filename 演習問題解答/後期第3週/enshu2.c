#include <stdio.h>

int main(void) {
  int sum = 0;
  int add;
  do {
    printf("現在のsum：%d\n", sum);
    scanf("%d", &add);
    sum = sum + add;
  } while(add != 0);
  return 0;
}
