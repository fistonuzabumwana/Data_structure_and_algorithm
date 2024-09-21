#include <stdio.h>

int main() {
    int size, selected;

    printf("Enter the size the array: ");
    scanf("%d", &size);

    int num[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    do {
        printf("\nMenu for Array Operations:\n");
        printf("1. Find the Maximum Element\n");
        printf("2. Find the Sum of all Elements\n");
        printf("3. Reverse the Array Elements\n");
        printf("4. Find the Average of Array Elements\n");
        printf("5. Exit\n\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &selected);

        switch (selected) {
            case 1: {
                int max = num[0];
                for (int i = 1; i < size; i++) {
                    if (num[i] > max) {
                        max = num[i];
                    }
                }
                printf("\nMaximum element: %d\n", max);
                break;
            }
            case 2: {
                int sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += num[i];
                }
                printf("\nSum of all elements: %d\n", sum);
                break;
            }
            case 3: {
                printf("\nReversed array: ");
                for (int i = size - 1; i >= 0; i--) {
                    printf("%d ", num[i]);
                }
                printf("\n");
                break;
            }
            case 4: {
                int sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += num[i];
                }
                float average = (float)sum / size;
                printf("\nAverage of array elements: %.2f\n", average);
                break;
            }
            case 5:
                printf("\nExiting program.\n");
                break;
            default:
                printf("\nInvalid choice! Please choose again.\n");
        }
    } while (selected != 5);

    return 0;
}
