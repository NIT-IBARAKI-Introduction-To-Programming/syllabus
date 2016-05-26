// 高専太郎　st00d00
#include <stdio.h>

int main(void) {
  int x, y;
  printf("1つ目の整数を入力してください：");
  scanf("%d", &x);
  printf("2つ目の整数を入力してください：");
  scanf("%d", &y);
  printf("和：%d\n", x + y);
  printf("差：%d\n", x - y); 
  printf("積：%d\n", x * y); 
  printf("商：%f\n", ((float) x / (float) y)); 
  return 0;
}
