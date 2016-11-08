#include <stdio.h>

int main() {
  int n = 2;
  n += 5;
  printf("nの値：%d\n", n);
  n *= 2;
  printf("nの値：%d\n", n);
  n /= 2;
  printf("nの値：%d\n", n);
  n -= 2;
  printf("nの値：%d\n", n);
  return 0;
}
