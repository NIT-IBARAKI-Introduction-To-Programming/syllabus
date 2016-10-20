#include <stdio.h>

int main(void) {
  int i; // カウンタ変数
  int stop;
  for(i=1; i<=5; i++) {
    printf("0を入力すると繰り返しを止めます。\n");
    scanf("%d", &stop);
    if (stop == 0) {
      break; // 0のときだけ繰り返しを止める
    }
  }
}
