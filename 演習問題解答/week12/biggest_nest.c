#include <stdio.h>

int main() {
    int a, b, c;
    printf("3つの整数を入力してください。\n");
    scanf("%d", &a); scanf("%d", &b); scanf("%d", &c); 
    // 三値の最大値を探す
    if (a > b) { // a > b > cもしくはc > b > a
        if (a > c) {
            printf("a=%dが最大", a);
        } else {
            printf("c=%dが最大", c);
        }
    } else { // b > a > cもしくはc > b > a
        if (b > c) {
            printf("b=%dが最大", b);
        } else  {
            printf("c=%dが最大", c);
        }
    }
}


