#include <stdio.h>
int main() {
  int i, j; // カウンタ変数を2つ宣言
  for(i=1; i<=9; i++) {
    printf("%dの段：", i);
    for(j=1; j<=9; j++) {
      printf("%3d ", i*j);
    }
    printf("\n");
  }
}


