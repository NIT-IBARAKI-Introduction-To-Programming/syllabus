#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  // よくある間違い
  if (3で割り切れる条件) {
    printf("fizz");　// 15 should cause error
  } else if (5で割り切れる条件) {
    printf("buzz");
  } else if (3でも5でも割り切れる条件) {
    printf("fizzbuzz");
  } else {
    // 何も表示しない
  }
}
