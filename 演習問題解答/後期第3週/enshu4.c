#include <stdio.h>

int main(void) {
  int i;
  int number;
  int result=1; // n乗した結果を格納する変数
  printf("整数を入力してください。\n");
  scanf("%d", &number);
  // n乗計算するfor文
  for(i=1; i<=number; i++) {
    result = result * 2;
  }
  printf("2 ^ %d = %d\n", number, result);
  return 0;
}
