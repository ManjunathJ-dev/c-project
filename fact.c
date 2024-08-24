#include <stdio.h>
int factorial() {
    int n, i;
    unsigned long long fact = 1;
    printf("\nEnter an integer: \n");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("\nFactorial of %d = %llu\n", n, fact);
    }

    return 0;
}
