#include <stdio.h>

int main() {
  char blood;
  printf("血液型を入力してください。\n");
  scanf("%c", &blood);

  switch (blood) {
    case 'a':
    case 'A':
      printf("happy!\n");
      break;
    case 'b':
    case 'B':
      printf("soso!\n"); 
      break;
    case 'c':
    case 'C':
      printf("bad!\n"); 
      break;
  }
  return 0;
}
