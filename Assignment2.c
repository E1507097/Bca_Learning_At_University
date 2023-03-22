//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

int main() 
{
   int num,a;
    a=0;
    printf("Enter number divisible by 8= ");
    scanf("%d",&num);
    while(num%8==0)
    {
        printf("\nEnter number divisible by 8=");
        scanf("%d",&num);
        a++;
    }
    printf("The number of valid numbers entered are %d",a);
 
  return 0;
}
