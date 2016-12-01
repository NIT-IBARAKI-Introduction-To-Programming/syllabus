#include <stdio.h>

// グローバル変数定義
int sum;
int average;
int max;

// 形式宣言
void calc(int a, int b, int c);

// 関数の本体
void calc(int a, int b, int c) {
  sum = a + b + c;
  average = (a + b + c) / 3;
  max = a;
  if (max < b) max = b;
  if (max < c) max = c;
}


int main() {
  calc(1, 2, 3);
  printf("合計：%d\n", sum);
  printf("平均：%d\n", average);
  printf("最大値：%d\n", max);

  return 0;
}
