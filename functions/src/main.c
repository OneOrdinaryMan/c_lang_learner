#include <stdio.h>
void hello() { printf("Hello world"); }
int square(int num) { return num * num; }
int main() {
  hello();
  int num = 5;
  int sqr = square(num);
  printf("%d\n", sqr);
  return 0;
}
