#include <stdio.h>
#define N 10

int main(){
  int numbers[N];
  int i, sum=0; // カウンタ変数を宣言
  // 配列に10個の値を読み込み
  for(i=0; i<N; i++) {
    printf("numbers[%d]: ", i); scanf("%d", &numbers[i]);
  }
  // 配列の要素を表示
  for(i=0; i<N; i++) {
    sum += numbers[i];
  }
  printf("合計値は%dです。\n", sum);
  return 0;
}

