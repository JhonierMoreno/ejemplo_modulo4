#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    if (month == 1)
        puts("January");
    else if (month == 2)
        puts("February");
    else if (month == 3)
        puts("March");
    else if (month == 4)
        puts("April");
    else if (month == 5)
        puts("May");
    else if (month == 6)
        puts("June");
    else if (month == 7)
        puts("July");
    else if (month == 8)
        puts("August");
    else if (month == 9)
        puts("September");
    else if (month == 10)
        puts("October");
    else if (month == 11)
        puts("November");
    else if (month == 12)
        puts("December");
    else
        puts("Error: no such month in my calendar.");

    return 0;
}
