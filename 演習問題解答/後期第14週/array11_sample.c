#include <stdio.h>

int main(){
  int numbers[11];
  int i; // カウンタ変数を宣言
  // 配列に10個の値を読み込み
  for(i=0; i<11; i++) {
    scanf("%d", &numbers[i]);
  }
  // 配列の要素を表示
  for(i=0; i<11; i++) {
    printf("numbers[%d]: %d", i, numbers[i]);
  }
  return 0;
}

