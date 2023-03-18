//Write a C code to find the number of distinct elements in a sorted array.

int main()
{
  int countdistinct(int a[], int n)      
{
   int i, j, count = 1;

   for (i = 1; i < n; i++)      
   {
      for (j = 0; j < i; j++)   
      {
         if (a[i] == a[j])    
         {
            break;             
         }
      }
      if (i == j)
      {
         count++;     
      }
   }
   return count;      
}
int main()
{
    int n;       
    printf("Enter the number of elements \n");
    scanf("%d",&n);    

    int a[n];   
    printf("Enter the elements of array:\n ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }   
    int c=countdistinct(a,n);      
    printf("The number of distinct elements are %d",c);   
  
  return 0;
}
