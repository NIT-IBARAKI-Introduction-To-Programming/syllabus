#include <stdio.h>

int main(void) {
  int i=5; // カウンタ変数
  int stop;
  while(i>=1) {
    printf("0を入力すると繰り返しを止めます。\n");
    scanf("%d", &stop);
    if (stop == 0) {
      break; // 0のときだけ繰り返しを止める
    }
    i--;
  }
}
