#include <stdio.h>

int main(void) {
  int i; // カウンタ変数
  int target; // ユーザが入力した整数を格納
  int is_prime=1; // 素数ならば1を取る変数

  // ユーザからの入力
  printf("整数を入力してください。\n");
  scanf("%d", &target);

  // 素数の判定
  for(i=2; i< target; i++) {
    if (target % i == 0) {
      is_prime = 0; // 割り切れたら素数ではないので0をセット
    }
  }
  // 判定結果の表示
  if (is_prime == 1) {
    printf("素数です。\n");
  } else {
    printf("素数ではありません。\n");
  }
  return 0;
}
