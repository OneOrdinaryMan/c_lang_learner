#include <stdio.h>
int main() {
  int array_1[10] = {1, 2, 3, 1, 5};
  for (int i = 0; i < 10; i++) {
    printf("%d\n", array_1[i]);
  }
  printf("\n");
  int array_2d[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int rows = sizeof(array_2d) / sizeof(array_2d[0]);
  int col = sizeof(array_2d[0]) / sizeof(array_2d[0][0]);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d\t", array_2d[i][j]);
    }
    printf("\n");
  }
  return 0;
}
