#include <stdio.h>

int main() {
  int type, milk;
  printf("コーヒーなら1，お茶なら2を入力してください。");

  scanf("%d", &type);
  if (type == 1) {
    printf("コーヒーですね。ミルクは入れますか？\n");
    scanf("%d", &milk);
    if (milk == 1) {
      printf("カフェオレですね。\n");
    } else {
      printf("ブラックですね。\n");
    }
  } else {
    printf("ブラックですね。\n");
  }
  return 0;
}
