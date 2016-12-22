#include <stdio.h>

int main() {
  // 1. int型の変数を3つ作る
  int person1;
  int person2;
  int person3;
  // 2. 値を代入
  person1 = 90;
  person2 = 100;
  person3 = 80;
  // 3. 平均を計算して表示
  printf("平均値：%d\n", (person1+person2+person3)/3);
  return 0;
}

