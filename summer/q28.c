#include <stdio.h>

int main() {
  int start, end, i, sum, count = 0;

  printf("Enter the start and end of the range: ");
  scanf("%d %d", &start, &end);

  for (i = start; i <= end; i++) {
    sum = 0;
    for (int j = 1; j <= i / 2; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (sum == i) {
      printf("%d is a perfect number.\n", i);
      count++;
    }
  }

  if (count == 0) {
    printf("There are no perfect numbers in the given range.\n");
  }

  return 0;
}