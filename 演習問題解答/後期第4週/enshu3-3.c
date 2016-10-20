#include <stdio.h>
int main() {
  int i, j; // カウンタ変数を2つ宣言
  printf(" ");
  for(i=1; i<=9; i++) {
    printf(" %3d", i);
  }
  printf("\n");
  printf("-------------------");
  printf("--------------------");
  printf("\n");
  for(i=1; i<=9; i++) {
    printf("%d|", i);
    for(j=1; j<=9; j++) {
      printf("%3d ", i*j);
    }
    printf("\n");
  }
}


