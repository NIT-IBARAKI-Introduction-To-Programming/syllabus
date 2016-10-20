#include <stdio.h>

int main(void) {
  int money = 0;
  int month = 0;
  while(money <= 1000000) {
    money = money + 500;
    month++;
    printf("%dヶ月目：%d円\n", month, money);
  }
  return 0;
}
