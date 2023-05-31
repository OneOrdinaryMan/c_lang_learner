#include <stdio.h>
#include <string.h>
struct Player {
  char name[12];
  int score;
};
int main() {
  struct Player player_1;
  struct Player player_2;
  strcpy(player_1.name, "John");
  player_1.score = 5;
  strcpy(player_2.name, "Michael");
  player_2.score = 4;
  printf("%s - %d\n", player_1.name, player_1.score);
  printf("%s - %d\n", player_2.name, player_2.score);
  return 0;
}
