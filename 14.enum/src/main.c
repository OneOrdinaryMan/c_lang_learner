#include <stdio.h>
typedef enum Day { Sun, Mon, Tue, Wed, Thu, Fri, Sat } day;
int main() {
  day today = Sat;
  if (today == Sat || today == Sun) {
    printf("Weekend");
  } else {
    printf("Weekday");
  }
  printf("\n");
  return 0;
}
