#include <stdio.h>

int main(void) {
  int speed;
  printf("新幹線の速さを入力してください。\n");
  scanf("%d", &speed);
  printf("あなたの入力した速度は%dkm/hですね。\n", speed);

  // if文による条件分岐
  if (speed < 270) {
    printf("新幹線はもっと早いですよ。\n");
  } else if (speed > 270) {
    printf("新幹線はもっと遅いですよ。\n");
  } else if (speed == 270) {
    printf("モノ知りですね!\n");
  }  

  return 0;
}




