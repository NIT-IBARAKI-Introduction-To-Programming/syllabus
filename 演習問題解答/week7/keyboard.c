// 高専太郎　st00d00
#include <stdio.h>

int main(void) {
  printf("キーボードからなにか文字を入力してください。\n");
  char c[256];
  scanf("%s", c);
  printf("%s\n", c);
  return 0;
}
