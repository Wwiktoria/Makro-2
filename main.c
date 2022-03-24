#include <stdio.h>
#define BIGGER(x,y) (x<y)?y:x
int main(void) {
  printf("Większą liczbą jest: %d ", BIGGER(9,3));
  return 0;
}