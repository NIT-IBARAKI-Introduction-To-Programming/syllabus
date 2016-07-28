#include <stdio.h>

int main() {
  int ticket;
  printf("行き先はどうしますか？\n");
  printf("1. 水戸, 2.土浦, 3.上野\n");

  scanf("%d", &ticket);

  switch (ticket){
    case 1:
      printf("190円です。\n");
      break;
    case 2:
      printf("970円です。\n");
      break;
    case 3:
      printf("2270円です。\n");
      break;
    default:
      printf("水戸、土浦、上野以外には対応していません");
      break;
  }
  return 0;
}

