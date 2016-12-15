/* 演習1のプログラム
   階乗を再帰的に計算する
*/
#include <stdio.h>

int kaijou(int n); // 形式宣言
// 関数の本体
int kaijou(int n) {
  printf("kaijou(%d)が呼び出された。\n", n);
  if (n > 0) { // nが0でない場合
    return n * kaijou(n-1);
  } else { // nが0の場合
    return 1;
  }
}
// main()関数
int main() {
  printf("3の階乗: %d\n", kaijou(3));
  return 0;
}

