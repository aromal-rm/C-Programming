#include <stdio.h>

int main() {
    int n, i, j, a[30], flag = 0;
    
    printf("Enter the limit: ");
    scanf("%d", &n);
    
    printf("Enter the %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++) {
        flag = 0; // Reset flag for each new number
        
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) {
            printf("\n1st non-repeating number is %d", a[i]);
            break;
        }
    }
    
    if (flag == 1) {
        printf("\nNo non-repeating number found.");
    }
    
    return 0;
}
