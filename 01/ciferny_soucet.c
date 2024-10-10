#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  if (scanf("%d", &num) != 1) {
    printf("Nespravny vstup.\n");
    return 0;
  }

  return 0;
}

