#include <stdio.h>

int main(void) {
  int i=5; // カウンタ変数
  int sum=0;
  while(i>=1) {
    sum = sum + i;
    i--;
  }
  printf("合計：%d\n", sum);
}
