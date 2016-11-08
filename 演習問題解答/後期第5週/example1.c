#include <stdio.h>

// 1. 形式宣言
void average();

// 2. 処理記述
void average() {
  // 1と2と3の平均値を表示
  printf("%d", (1+2+3) / 3);
}

int main() {
  // 3. main()関数からの呼び出し
  average();
  return 0;
}


