//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

int main()
{
   char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    selectionSort(str, strlen(str));
    printf("Sorted string: %s", str);
    return 0;
}

void selectionSort(char str[], int n) {
    int i, j, min_idx;
    char temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (str[j] < str[min_idx]) {
                min_idx = j;
            }
        }
        temp = str[i];
        str[i] = str[min_idx];
        str[min_idx] = temp;
    }
  return 0;
}
