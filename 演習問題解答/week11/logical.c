#include <stdio.h>

int main(void) {
  // 1. キーボードから変数nに整数を読み込む
  int n;
  scanf("%d", &n);

  /* 2. 50以上または100以下で、なおかつ偶数
        ならば「正しい数字です。」と表示
  */
  if (n >= 50 && n <= 100 && (n % 2) == 0) {
    printf("正しい数字です。");
  }

  return 0;

}
