#include <math.h>
#include <stdio.h>
int main() {
  double a = sqrt(9);
  double b = pow(2, 4);
  int c = round(3.14);
  int d = ceil(3.14);
  int e = floor(3.14);
  float f = fabs(-1000.0);
  double g = log(3.0);
  double h = sin(30);
  double i = cos(60);
  double j = tan(45);
  printf("%lf, %lf, %d, %d, %d, %f, %lf, %lf,%lf, %lf\n", a, b, c, d, e, f, g,
         h, i, j);
}
