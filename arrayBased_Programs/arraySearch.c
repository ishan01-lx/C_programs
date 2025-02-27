#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);  // Get the size of the array

    int a[n];
    int i;

    // Input the elements of the array
    for(i = 0; i < n; i++) {
        printf("Enter the number for element %d:  \n", i + 1);
        scanf("%d", &a[i]);
    }

    int search;
    printf("Enter the number you want to search for:   \n");
    scanf("%d", &search);

    int found = 0;  // Flag to track if the element is found

    // Search for the element in the array
    for(i = 0; i < n; i++) {
        if(a[i] == search) {
            printf("%d found at index %d\n", search, i);
            found = 1;  // Mark as found
            break;      // Exit the loop once found
        }
    }

    // If the element is not found, print a message
    if(!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}

// Output: Enter the number of elements:
// 5
// Enter the number for element 1:
// 10
// Enter the number for element 2:
// 20
// Enter the number for element 3:
// 30
// Enter the number for element 4:
// 40
// Enter the number for element 5:
// 50

// Enter the number you want to search for:
// 30

// 30 found at index 2