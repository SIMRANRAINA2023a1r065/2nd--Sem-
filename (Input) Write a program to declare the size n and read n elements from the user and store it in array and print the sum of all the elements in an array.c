//Write a program to declare the size n and read n elements from the user and store it in array and print the sum of all the elements in an array
#include <stdio.h>
int main() {
    int n;
    // Read the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Declare an array of size n
    int arr[n];
    // Read n elements from the user and store them in the array
    printf("Enter %d elements:\n", n);
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add the current element to the sum
    }
    // Print the sum of all elements in the array
    printf("Sum of all elements: %d\n", sum);
    return 0;
}