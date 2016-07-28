#include <stdio.h>

int main() {
  int age;
  printf("年齢を入力してください。\n");
  scanf("%d", &age);

  if (age == 20) {
    printf("%d歳、成人おめでとう！\n", age);
  } else if (age == 60) {
    printf("%d歳、還暦おめでとう！\n", age);
  } else {
    printf("%d歳ですね。\n", age);
  }
  return 0;
}
