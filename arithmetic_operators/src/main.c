#include <stdio.h>
int main() {
  int x = 15;
  int y = 10;
  int sum = x + y;
  int diff = x - y;
  int product = x * y;
  float div = x / (float)y;
  int mod = x % y;
  x++;
  y--;
  printf("%d\t%d\t%d\t%f\t%d\t%d\t%d\n", sum, diff, product, div, mod, x, y);
  return 0;
}
