#include <stdio.h>

#define MAX_YEARS 1000

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void find_leap_years(int start, int end, int leap_years[], int *count) {
    for (int year = start; year <= end; year++) {
        if (is_leap_year(year)) {
            leap_years[(*count)++] = year;
        }
    }
}

int main() {
    int start_year, end_year;
    printf("Enter the first number: ");
    scanf("%d", &start_year);
    printf("Enter the second number: ");
    scanf("%d", &end_year);

    int leap_years[MAX_YEARS];
    int count = 0;

    find_leap_years(start_year, end_year, leap_years, &count);

    printf("The array is: ");
    for (int i = 0; i < count; i++) {
        printf("%d", leap_years[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

