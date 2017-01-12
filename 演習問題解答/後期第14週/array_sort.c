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
  for(i=0; i<N; i++) {
    for(j=i; j<N; j++) {
      if(numbers[i]<numbers[j]) {
        tmp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = tmp;
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

