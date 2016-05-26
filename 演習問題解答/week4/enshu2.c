#include <stdio.h>

int main(void) {
  float person1, person2, person3, average;
  person1 = 100.0;
  person2 = 140.0;
  person3 = 150.0;
  average = (person1 + person2 + person3) / 3;
  printf("Aさん：%f, Bさん：%f, Cさん：%f, 平均：%f\n", person1, person2, person3, average);
}
