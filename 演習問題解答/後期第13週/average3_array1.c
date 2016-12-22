#include <stdio.h>

int main() {
  // 1. 配列を宣言
  int person[3];
  // 2. 配列への値の代入
  person[0] = 90;
  person[1] = 100;
  person[2] = 80;
  // 3. 平均を計算して表示
  printf("平均値：%d\n", (person[0]+person[1]+person[2])/3);
  return 0;
}

