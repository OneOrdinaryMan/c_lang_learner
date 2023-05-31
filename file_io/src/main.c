#include <math.h>
#include <stdio.h>
int main() {
  char s[] = "target/hello.txt";
  char buf[255];
  FILE *pf = fopen(s, "r");
  // fprintf(pf, "Hello world\n");
  // fprintf(pf, "How are you?");
  while (fgets(buf, 255, pf) != NULL) {
    printf("%s", buf);
  }
  fclose(pf);
  /*if (remove(s) == 0) {
    printf("File removed\n");
  }*/
  return 0;
}
