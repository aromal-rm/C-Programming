#include<stdio.h>
int main() {
    int i, n, sum, a[100], s, j, k, flag = 0;
    printf("Enter the sum: ");
    scanf("%d", &sum);
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    // GET THE ARRAY
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //CHECK THE SUBARRAYS FOR THE SUM USER ENTERED
    for (i = 0; i < n; i++) {
        s = 0;
        //CHECK FROM I TO N WHERE I INCREMENTS FROM 0 TO N
        for (j = i; j < n; j++) {
            s += a[j];
            if (s == sum) {
                flag = 1;
                break;
            }else{
                continue;
            }
            //BREAKS WHEN THE SUM FROM I TO J BECOMES EQUAL TO THE SUM USER ENTERD
            //ASSIGNS THE FLAG TO 1 WHEN SUM IS SAME
        }
        if (flag == 1) {
            break;
        }
        //BREAK OUTER LOOP WHEN FLAG IS EQUAL TO 1
    }
    if (flag == 1) {
        printf("Sum found between index %d and %d", i, j);
    } else {
        printf("Sum not found");
    }
    
    return 0;
}
