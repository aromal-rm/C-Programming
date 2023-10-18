#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, i, j;

  printf("Enter the first term: ");
  scanf("%d", &a);

  printf("Enter the last term: ");
  scanf("%d", &b);

  printf("The prime number from %d to %d are: ", a, b);

  for (j = a; j <= b; j++) {
    if (j == 1) {
      continue;
    }

    for (i = 2; i * i <= j; i++) {
      if (j % i == 0) {
        break;
      }
    }

    if (i * i > j) {
      printf("%d, ", j);
    }
  }

  printf("\n");

  return 0;
}
