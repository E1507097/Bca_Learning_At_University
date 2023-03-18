//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include <stdio.h>

int main() {
    int n, num, pos_count = 0, neg_count = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > 0) {
            pos_count++;
        }
        else if(num < 0) {
            neg_count++;
        }
    }

    printf("Total positive numbers: %d\n", pos_count);
    printf("Total negative numbers: %d\n", neg_count);

    return 0;
}
