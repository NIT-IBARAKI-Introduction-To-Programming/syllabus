#include <stdio.h>

int main(void) {
  int a, b, c;
  // 1. a, bに値を代入
  a = 10; b = 20;

  // 2. printf()関数で変数の値を表示
  printf("変数aの値は%d、変数bの値は%dです。\n", a, b);

  // 3. aとbの値を入れ替える
  c = a;
  a = b;
  b = c;

  // 4. printf()関数で変数の値を表示
  printf("変数aの値は%d、変数bの値は%dです。\n", a, b);

  return 0;
}


