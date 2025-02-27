#include <stdio.h>

int fibonacci(int n);

int main() {
    int n, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}


int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Output: Enter the number of terms: 10
// Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
