#include <stdio.h>

int main(void) {
  float hankei;
  int command;

  scanf("%f", &hankei);

  printf("面積は1、円周の長さは2を入力してください\n");
  scanf("%d", &command);

  if (command == 1) {
    printf("面積：%f\n", hankei * hankei * 3.14);
  } else if (command == 2) {
    printf("円周：%f\n", 2 * hankei * 3.14);
  } else {
  }

  return 0;
}




