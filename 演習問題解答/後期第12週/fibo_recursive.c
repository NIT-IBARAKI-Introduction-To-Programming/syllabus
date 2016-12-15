#include <stdio.h>
int fibo(int n);
int fibo(int n) {
  // ここはif文でもswitch文でも良い
  switch (n) {
    case 0: return 0;
    case 1: return 1;
    default: return fibo(n-1) + fibo(n-2);
  }
}

int main() {
  int n, i;
  
  // 演習2（キーボード入力した数のフィボナッチ数を求める）
  //printf("n=");
  //scanf("%d", &n); // nに値を読み込む
  // printf("%dのフィボナッチ数は%dです。\n", n, fibo(n));

  // 演習3（フィボナッチ数列の出力）
  for(i=0; i<=10; i++) {
    printf("%d番目：%d\n", i, fibo(i));
  }
  return 0;
}

