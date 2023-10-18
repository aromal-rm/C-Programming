#include <stdio.h>

typedef struct mydate {
    int day;
    int month;
    int year;
} date;

const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

date getdate() {
    date d1 = {0};
    printf("Enter the date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &d1.day, &d1.month, &d1.year);
    return d1;
}

date add_date(date d1, int n) {
    while (n > 0) {
        while (d1.day <= 30 && n > 0) {
            d1.day++;
            if (d1.day == 31) {
                d1.month++;
                d1.day = 1;
                if (d1.month == 13) {
                    d1.year++;
                    d1.month = 1;
                }
            }
            n--;
        }
    }
    return d1;
}

void dispdate(date d1) {
    printf("Your new date is: %d/%s/%d\n", d1.day, months[d1.month - 1], d1.year);
}

int main() {
    date get, new;
    int no;
    get = getdate();
    printf("Enter the number of days to increase: ");
    scanf("%d", &no);
    new = add_date(get, no);
    dispdate(new);
    return 0;
}
