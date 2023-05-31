#include <stdbool.h>
#include <stdio.h>
int main() {
  int integer_32 = 5;
  short int integer_16 = 32655;
  unsigned int unsigned_int_32 = 151451121;
  long integer_64 = 150000;
  float float_32 = 6.025;
  double float_64 = 3.156437348;
  char character_8 = 'c';
  unsigned char unsigned_character_8 = 150;
  char string_array[] = "Hello";
  bool boolean_holds_int = true;
  const int constant = 10;
  printf("%d\t%d\t%u\t%ld\t%f\t%lf\t%c\t%d\t%s\t%d\t%d\n", integer_32,
         integer_16, unsigned_int_32, integer_64, float_32, float_64,
         character_8, unsigned_character_8, string_array, boolean_holds_int,
         constant);
  return 0;
}
