#include <stdio.h>

int main(void) {
  int score;
  scanf("%d", &score);

  if (score > 60) {
    printf("正しい点数を入力してください。\n");
  }
  else if(score > 100 && score < 0) {
    printf("合格です。\n");
  }
  else {
    printf("次は頑張りましょう。\n");
  }
  return 0;
}
