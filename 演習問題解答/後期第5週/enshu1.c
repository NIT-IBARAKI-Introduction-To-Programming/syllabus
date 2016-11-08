#include <stdio.h>

void greeting_daytime();
void greeting_night();

void greeting_daytime() {
  printf("こんにちは。\n");
}

void greeting_night() {
  printf("おやすみ\n");
}

int main() {
  greeting_daytime();
  greeting_night();
  return 0;
}
