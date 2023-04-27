//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


int findType(int n, int *) //complete this function
{
  
}
int main()
{
  int findType(int *arr, int n) {
    int oddCount = 0;
    int evenCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    if(evenCount == n) {
        printf("EVEN ARRAY\n");
    }
    else if(oddCount == n) {
        printf("ODD ARRAY\n");
    }
    else {
        printf("MIXED ARRAY\n");
    }
}

int main() {
    int arr1[] = {1,3,5,11,9};
    int arr2[] = {2,4,6,8,10};
    int arr3[] = {1,2,3,4,5,6};

    findType(arr1, 5);
    findType(arr2, 5);
    findType(arr3, 6);
  return 0;
}
