#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int num;
  if (scanf("%d", &num) != 1) {
    printf("Nespravny vstup.\n");
    return 0;
  }

  int size = 1 + log10(num);

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += num % 10;
    num /= 10;
  }
  printf("%d\n", sum);
  
  return 0;
}

