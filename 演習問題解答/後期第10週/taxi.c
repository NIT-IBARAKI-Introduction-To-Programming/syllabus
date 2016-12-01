#include <stdio.h>

// 演習1-2：グローバル変数の宣言
int money; // 獲得した収益
int gasoline; // ガソリン使用量
int distance; // 走行距離

// 関数の形式宣言
void run(int a, int b); // タクシーを走らせる関数
void show(); // タクシーの状況を表示する関数

// 演習1−4：run()関数の本体
void run(int a, int b) {
  printf("%dkmを%d人乗せて走りました。\n", a, b);
  money += a * 100;
  gasoline -= a * b;
  distance += a;
  show(); // 演習1−7
}

// 演習1−4：show()関数の本体
void show() {
  printf("現在のタクシーの状況を表示します。\n");
  printf("獲得した収益合計：%d円\n", money);
  printf("ガソリン使用量合計：%dリットル\n", gasoline);
  printf("走行距離合計：%dkm\n", distance);
}

int main() {
  // 演習1−3：変数の初期化
  money = 0;
  gasoline = 100;
  distance = 0;
  // 演習1−4：
  show();

  run(10, 2); // 2人乗せて10km走る
  return 0;
}
