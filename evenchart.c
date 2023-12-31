#include <stdio.h>

// Function to print the set of even numbers up to a given limit
void printEvenNumbers(int limit) {
    printf("Even numbers up to %d:\n", limit);

    for (int i = 2; i <= limit; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
}

int main() {
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printEvenNumbers(limit);

    return 0;
}
