#include <stdio.h>

int main() {
  int n, original_n, sum = 0, dig;

  printf("Enter a number: ");
  scanf("%d", &n);

  original_n = n;

  while (n > 0) {
    dig = n % 10;
    sum = sum + dig * dig * dig;
    n /= 10;
  }

  if (sum == original_n) {
    printf("%d is an Armstrong number.\n", original_n);
  } else {
    printf("%d is not an Armstrong number.\n", original_n);
  }

  return 0;
}