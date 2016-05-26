#include <stdio.h>

int main(void) {
  char s[256];
  printf("文字を入力してください：\n");
  scanf("%s", s);
  printf("あなたの入力した文字は%sです。\n", s);
  return 0;
}
