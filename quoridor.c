#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024

int main() {
  setbuf(stdout, NULL);
  char buf[BUFSIZE];
  // get the letter of the player
  fgets(buf, BUFSIZE, stdin);
  int turn = (buf[0] == ’A’) ? 0 : 1;
  // initialize the state of the game
  for (;;) {
    if (turn == 0) { // my turn
      int l, c;
      // compute the action and the coordinates
      puts("MOVE"); // or "WALL H" or "WALL V"
      printf("%d\n%d\n", l, c);
      3
      fgets(buf, BUFSIZE, stdin);
      if (strcmp(buf, "WIN\n") == 0
        || strcmp(buf, "LOSE\n") == 0) {
        break;
      }
    } else { // other player’s turn
      fgets(buf, BUFSIZE, stdin);
      if (strcmp(buf, "WIN\n") == 0
        || strcmp(buf, "LOSE\n") == 0) {
        break;
      }
      fgets(buf, BUFSIZE, stdin);
      int l = atoi(buf);
      fgets(buf, BUFSIZE, stdin);
      int c = atoi(buf);
    // update the state of the game
    }
    turn = 1 - turn;
  }
  return 0;
}
