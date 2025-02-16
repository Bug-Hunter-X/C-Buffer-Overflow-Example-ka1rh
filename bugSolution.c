#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;
  if (ptr != NULL) { //Check for NULL pointer before dereferencing
    *ptr = 20; 
  }
  printf("%d\n", x);
  return 0;
}
