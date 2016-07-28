#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  if (n % 15 == 0) {
    printf("fizzbuzz\n");
  } else if (n % 3 == 0) {
    printf("fizz\n");
  } else if (n % 5 == 0) {
    printf("buzz\n");
  } else {
    // 何も表示しない
  }
  return 0;
}
