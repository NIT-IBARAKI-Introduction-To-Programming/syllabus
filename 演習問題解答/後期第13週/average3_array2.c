#include <stdio.h>

int main() {
  // 1. 配列を宣言と初期化を同時に行う
  int person[3] = {90, 100, 80};
  // 3. 平均を計算して表示
  printf("平均値：%d\n", (person[0]+person[1]+person[2])/3);
  return 0;
}

