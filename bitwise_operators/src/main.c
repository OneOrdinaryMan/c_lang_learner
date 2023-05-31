#include <stdio.h>
int main() {
  int x = 6;
  int y = 0;
  int z = 12;
  printf("%d\t", x & z);
  printf("%d\t", x | z);
  printf("%d\t", !y);
  printf("%d\t", x ^ z);
  printf("%d\t", x << 1);
  printf("%d\t", x >> 1);
  printf("\n");
  return 0;
}
