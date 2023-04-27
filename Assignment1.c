//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

int main()
{
  //add your code here
  int limit, num, positive = 0, negative = 0, zero = 0,i;  
  
    printf("Enter the limit\n");  
    scanf("%d", &limit);  
  
    printf("Enter %d numbers\n", limit);  
  
    for(i=0;i<limit;i++)  
    {  
        scanf("%d", &num);    
        if(num > 0)  
        {  
            positive++;  
        }  
        else if(num < 0)  
        {  
            negative++;  
        }  
        else  
        {  
            zero++;  
        }  
    }  
    printf("\nPositive Numbers: %d\n", positive);  
    printf("Negative Numbers: %d\n", negative);  
    printf("Number of zero: %d\n", zero);  
  return 0;

}
