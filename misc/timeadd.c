#include <stdio.h>

typedef struct time {
    int hours;
    int minutes;
    int seconds;
} Time;

Time addTime(Time t1, Time t2) {
    Time sum;
    int rem = 0;

    sum.seconds = t1.seconds + t2.seconds;
    rem = sum.seconds / 60;
    sum.seconds %= 60;

    sum.minutes = t1.minutes + t2.minutes + rem;
    rem = sum.minutes / 60;
    sum.minutes %= 60;

    sum.hours = t1.hours + t2.hours + rem;

    return sum;
}

void displayTime(Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    Time time1, time2, sum;

    printf("Enter time 1 (hh:mm:ss): ");
    scanf("%d%d%d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter time 2 (hh:mm:ss): ");
    scanf("%d%d%d", &time2.hours, &time2.minutes, &time2.seconds);

    sum = addTime(time1, time2);

    printf("Sum of the two times:\n");
    displayTime(sum);

    return 0;
}
