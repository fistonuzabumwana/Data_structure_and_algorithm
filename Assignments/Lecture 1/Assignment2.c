#include <stdio.h>

int main() {
    int hrs[6];
    int totalHrs = 0;
    int wagePerHr = 1000;

    for (int i = 0; i < 6; i++) {
        printf("Enter the number of hours worked by employee %d: ", i+1);
        scanf("%d", &hrs[i]);
        totalHrs += hrs[i]; // Add hours to the total
    }

    int totalWages = totalHrs * wagePerHr;

    printf("\nTotal hours worked by all employees: %d\n", totalHrs);
    printf("Total wages for all employees: $%d\n", totalWages);

    return 0;
}
