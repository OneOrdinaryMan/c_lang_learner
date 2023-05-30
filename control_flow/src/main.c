#include <stdio.h>
int main() {
  int age = 18;
  if (age >= 21) {
    printf("You are legal to drink\n");
  } else if (age >= 18) {
    printf("You are legal to drive\n");
  } else {
    printf("You are minor\n");
  }
  char ans = 'y';
  switch (ans) {
  case 'y':
    printf("You answered yes\n");
    break;
  case 'n':
    printf("You answered no\n");
    break;
  default:
    printf("Not an answer\n");
  }
  return 0;
}
