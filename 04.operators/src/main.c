#include <stdbool.h>
#include <stdio.h>
int main() {
  // Arithmetic Operators.
  int num_1 = 15;
  int num_2 = 10;
  int sum = num_1 + num_2;
  int diff = num_1 - num_2;
  int product = num_1 * num_2;
  float div = num_1 / (float)num_2;
  int mod = num_1 % num_2;
  num_1++;
  num_2--;
  printf("%d\t%d\t%d\t%f\t%d\t%d\t%d\n", sum, diff, product, div, mod, num_1,
         num_2);

  // Logical Operators.
  float temp = 25;
  bool sunny = true;
  if (temp > 0 && temp < 35 && sunny) {
    printf("The weather is good");
  }
  if (temp <= 0 || temp >= 35 || !sunny) {
    printf("The weather is bad");
  }

  // Bitwise operators.
  int num_3 = 6;
  int num_4 = 12;
  int num_5 = 0;
  printf("%d\t", num_3 & num_4);
  printf("%d\t", num_3 | num_4);
  printf("%d\t", !num_5);
  printf("%d\t", num_3 ^ num_4);
  printf("%d\t", num_3 << 1);
  printf("%d\t", num_3 >> 1);
  printf("\n");

  // Operator overloading
  int num_6 = 0;
  printf("%d\n", num_6);
  num_6 += 2;
  printf("%d\n", num_6);
  num_6 -= 1;
  printf("%d\n", num_6);
  num_6 *= 3;
  printf("%d\n", num_6);
  num_6 /= 3;
  printf("%d\n", num_6);
  num_6 %= 3;
  printf("%d\n", num_6);
  return 0;
}
