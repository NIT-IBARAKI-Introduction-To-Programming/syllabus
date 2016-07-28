#include <stdio.h>

int main() {
  int order;
  printf("コーヒーなら1，お茶なら2，水なら3を入力してください\n");
  scanf("%d", &order);

  switch (order) {
    case 1:
      printf("コーヒーですね。\n");
      break;
    case 2:
      printf("お茶ですね。\n"); 
      break;
    case 3:
      printf("水ですね。\n"); 
      break;
  }
  return 0;
}
