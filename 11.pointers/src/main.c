#include <stdio.h>
int main() {
  int num = 5;
  int *pAddr = &num;
  printf("%d - %p\n", num, pAddr);
  printf("%d\n", *pAddr);
  return 0;
}
