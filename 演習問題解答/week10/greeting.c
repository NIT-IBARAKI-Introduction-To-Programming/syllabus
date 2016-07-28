#include <stdio.h>

int main() {
  int hour;
  scanf("%d", &hour);

  if (hour >= 0 && hour <= 11) {
    printf("おはようございます。\n");
  } else if (hour == 12) {
    printf("お昼です。\n");
  } else if (hour >= 13 && hour <= 18) {
    printf("こんにちは。\n");
  } else if (hour >= 19 && hour <= 23) {
    printf("こんばんは。\n");
  } else {
    printf("時刻の範囲を超えています\n");
  }
  return 0;
}
