#include <stdio.h>
#define N 5

int main(){
  int numbers[N];
  int i, j, tmp; // カウンタ変数を宣言
  // 配列に値を読み込み
  for(i=0; i<N; i++) {
    printf("numbers[%d]: ", i); scanf("%d", &numbers[i]);
  }
  // 配列をソート
  for (i = N-1; i >= 0; i--) {
    // ２要素を繰り返し比較する
    for (j = 0; j < i; j++) {
      /* 後ろの要素の方が大きければ交換 */
      if (numbers[j] < numbers[j+1]) {
        tmp = numbers[j];       
        numbers[j] = numbers[j+1];
        numbers[j+1]= tmp;
      }
    } 
  }
  // 配列の中身を表示
  printf("並べ替え後: ");
  for(i=0; i<N; i++) {
    printf("numbers[%d]: %d\n", i, numbers[i]);
  }
  return 0;
}
