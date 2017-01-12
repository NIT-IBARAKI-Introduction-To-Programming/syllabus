#include <stdio.h>
#define N 5

int main(){
  int numbers[N];
  int i, max=0; // カウンタ変数を宣言
  // 配列に10個の値を読み込み
  for(i=0; i<N; i++) {
    printf("numbers[%d]: ", i); scanf("%d", &numbers[i]);
  }
  // 配列の要素を表示
  for(i=0; i<N; i++) {
    if(max < numbers[i]) {
      max = numbers[i];
    }
  }
  printf("最大値は%dです。\n", max);
  return 0;
}

