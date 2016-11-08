#include <stdio.h>

void prime_to_1000();

void prime_to_1000() {
  int i, j; // カウンタ変数
  int is_prime; // 素数ならば1を取る変数

  for(i=1; i<= 1000; i++) {
    is_prime = 1;
    // 素数の判定
    for(j=2; j< i; j++) {
      if (i%j == 0) {
        is_prime = 0; // 割り切れたら素数ではないので0をセット
      }
    }
    // 素数ならば表示
    if (is_prime == 1) {
      printf("%d\n", i);
    }
  }
}

int main() {
  prime_to_1000();
  return 0;
}
