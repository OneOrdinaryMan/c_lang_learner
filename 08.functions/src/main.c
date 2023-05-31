#include <stdio.h>
void hello() { printf("Hello world"); }
int square(int num) { return num * num; }
int max(int, int);
int main() {
  hello();
  int num = 5;
  int sqr = square(num);
  printf("%d\n", sqr);
  int max_integer = max(10, 7);
  printf("%d\n", max_integer);
  return 0;
}
int max(int num1, int num2) { return (num1 > num2) ? num1 : num2; }
