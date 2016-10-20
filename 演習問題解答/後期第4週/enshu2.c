#include <stdio.h>
int main() {
  int i, j; // カウンタ変数を2つ宣言
  for(i=1; i<=5; i++) {
    printf("%d ", i); // iの値を表示
    for(j=1; j<=(i * i -1); j++) {
      printf("*"); // *をi個表示
    }
    printf("\n");
  }
}


