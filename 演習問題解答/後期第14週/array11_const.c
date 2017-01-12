#include <stdio.h>

#define N 11

int main(){
  int numbers[N];
  int i; // カウンタ変数を宣言
  // 配列に10個の値を読み込み
  for(i=0; i<N; i++) {
    scanf("%d", &numbers[i]);
  }
  // 配列の要素を表示
  for(i=0; i<N; i++) {
    printf("numbers[%d]: %d", i, numbers[i]);
  }
  return 0;
}

