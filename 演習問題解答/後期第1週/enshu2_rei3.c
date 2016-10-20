#include <stdio.h>

int main(void) {
  int i; // カウンタ変数
  int sum=0;
  for(i=1; i<=5; i++) {
    sum = sum + i;
  }
  printf("合計：%d\n", sum);
}
