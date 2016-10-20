#include <stdio.h>

int main(void) {
  int money = 1000500;
  int month = 0;
  do {
    month++;
    printf("%dヶ月目：%d円\n", month, money);
    money = money + 500;
  } while(money <= 1000000);
  return 0;
}
