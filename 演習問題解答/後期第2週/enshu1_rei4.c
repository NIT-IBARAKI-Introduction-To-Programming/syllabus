#include <stdio.h>

int main(void) {
  int i; // カウンタ変数
  int sum=0;
  int start=5;
  int end=2;
  i = start;
  while(i>=end) {
    sum = sum + i;
    i--;
  }
  printf("合計：%d\n", sum);
  return 0;
}
