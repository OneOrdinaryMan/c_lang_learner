#include <stdio.h>
int main() {
  for (int i = 0; i < 5; i++) {
    printf("Hello, world!\n");
    if (i == 3) {
      continue;
    }
    printf("Hello, buddy!\n");
  }
  int i = 0;
  while (i < 10) {
    printf("Hello, world!\n");
    if (i > 3) {
      break;
    }
    i++;
  }
  int j = 0;
  do {
    printf("Hello, world!\n");
    j++;
  } while (j < 5);
}
