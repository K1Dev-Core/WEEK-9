#include <stdio.h>

int main() {
    int n, i = 0;
    float number, sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &number);
        sum += number; 
        i++;  
    }

    average = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
