#include <stdbool.h>
#include <stdio.h>
int main() {
  float temp = 25;
  bool sunny = true;
  if (temp > 0 && temp < 35 && sunny) {
    printf("The weather is good");
  }
  if (temp <= 0 || temp >= 35 || !sunny) {
    printf("The weather is bad");
  }
  return 0;
}
