#include <stdio.h>

int main(void) {
  int person1, person2, person3, command;
  scanf("%d", &person1);
  scanf("%d", &person2);
  scanf("%d", &person3);

  printf("合計値は1、平均値は2を入力してください\n");
  scanf("%d", &command);

  if (command == 1) {
    printf("合計：%d\n", person1+person2+person3);
  } else if (command == 2) {
    printf("平均：%d\n", (person1+person2+person3)/3);
  } else {
    printf("不正な命令です。\n");
  }

  return 0;
}




