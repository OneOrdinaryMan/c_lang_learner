#include <stdbool.h>
#include <stdio.h>
int main() {
  int x = 5;
  short int i = 32655;
  unsigned int un = 151451121;
  unsigned long long int ll = 148484111151554544U;
  long l = 150000;
  float f = 6.025;
  double d = 3.156437348;
  char c = 'c';
  unsigned char u = 150;
  char s[] = "Hello";
  bool b = true;
  printf("%d\t%d\t%u\t%llu\t%ld\t%f\t%lf\t%c\t%d\t%s\t%d\n", x, i, un, ll, l, f,
         d, c, u, s, b);
  return 0;
}
