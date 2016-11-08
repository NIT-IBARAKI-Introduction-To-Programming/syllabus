#include <stdio.h>

void odd_to_1000();

void odd_to_1000() {
  int i;
  for(i=1; i<=1000; i++) {
    if (i%2 == 1) {
      printf("%d\n", i);
    }
  }
}

int main() {
  odd_to_1000();
  return 0;
}
