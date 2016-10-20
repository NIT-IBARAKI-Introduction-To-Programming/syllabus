#include <stdio.h>

int main(void) {
  int sum=0;
  int add;
  while(add != 0){
    printf("現在のsum：%d\n", sum);
    scanf("%d", &add);
    sum = sum + add;
  }
  return 0;
}
