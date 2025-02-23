// WAP to check whether the given number is Prime number or not

#include <stdio.h>
// Function to check if a number is prime
void primeCheck(int n) {
    int isPrime = 1;  // Assume the number is prime initially
    int i;

    // Step 1: Handle edge cases (Numbers less than 2 are not prime)
    if (n < 2) {
        isPrime = 0;  
    }

    // Step 2: Check divisibility from 2 to sqrt(n)
    for (i = 2; i * i <= n; i++) {  
        if (n % i == 0) {  // If divisible, it's not prime
            isPrime = 0;
            break;  // Exit the loop as soon as a divisor is found
        }
    }

    // Step 3: Print the result based on isPrime flag
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}

int main() {
    int n;

    // Prompt user for input
    printf("Enter the number: ");
    scanf("%d", &n);

    // Call the function to check if the number is prime
    primeCheck(n);

    return 0;  // Return 0 to indicate successful execution
}
