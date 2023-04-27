//Write a code find the length of a string and its reverse equivalent without using readymade c functions
#include<stdio.h>
int main()
{
  char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while (str[len] != '\0') {
        len++;
    }

    printf("Length of string: %d\n", len);

    // Reverse string
    char rev_str[100];
    int i, j;
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        rev_str[j] = str[i];
    }
    rev_str[j] = '\0';

    printf("Reverse equivalent of string: %s\n", rev_str);
  return 0;
}
