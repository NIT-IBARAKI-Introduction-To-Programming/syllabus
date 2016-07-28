#include <stdio.h>

int main() {
  int age;
  printf("年齢を入力してください。\n");
  scanf("%d", &age);

  switch (age) {
    case 20:
      printf("%d歳、成人おめでとう！\n", age);
      break;
    case 60:
      printf("%d歳、還暦おめでとう！\n", age);
      break;
    default:
      printf("%d歳ですね。\n", age);
  }
  return 0;
}
