#include <stdio.h>
int main() {
  int num;
  char string[20];
  fgets(string, 20, stdin);
  printf("%s", string);
  scanf("%d", &num);
  printf("%d", num);
  // scanf("%s", string);
  // printf("%s\n", string);
}
