#include <stdio.h>
#include <string.h>

// Q118: Write a program to take an input array of size n.
// The array should contain all the integers between 0 to n except for one.
// Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int nums[n - 1]; // Array will have n-1 elements
    printf("Enter %d integers between 0 to %d (excluding one number):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate the expected sum of numbers from 0 to n
    int expected_sum = n * (n + 1) / 2;
    
    // Calculate the actual sum of the input array
    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        actual_sum += nums[i];
    }

    // The missing number is the difference between expected and actual sums
    int missing_number = expected_sum - actual_sum;
    
    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}