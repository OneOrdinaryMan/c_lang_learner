#include <stdio.h>
#include <string.h>
int main() {
  char string_1[30] = "Hello";
  char string_2[] = "World";
  strcat(string_1, string_2);
  puts(string_1);
  strncat(string_1, string_2, 2);
  puts(string_1);
  strcpy(string_1, string_2);
  puts(string_1);
  strncpy(string_1, string_2, 4);
  puts(string_1);
  int result = strlen(string_1);
  printf("%d\n", result);
  int cmp = strcmp(string_1, string_2);
  printf("%d\n", cmp);
}
