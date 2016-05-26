#include <stdio.h>

int main(void) {
  printf("年齢Bot\n");
  printf("----------------\n");
  // 演習4
  printf("あなたの名前は何ですか？\n");
  // 演習5
  char name[10];
  scanf("%s", name);
  printf("ようこそ%sさん！\n", name);
  // 演習6
  printf("歳はいくつですか？\n");
  int age;
  scanf("%d", &age);
  printf("10年後は%d歳ですね！", age + 10);

  return 0;
  
  
}
