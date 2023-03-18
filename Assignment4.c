//Write a C code to find the maximum element in each row of the 3 X 3 matrix

int main()
{
  int a[3][3], i, j;

   printf("enter 9 elements of 3x3 matrix :");

   for (i = 0; i < 3; i++)
   {

      for (j = 0; j < 3; j++)
      {

         scanf("%d", &a[i][j]);
      }
   }
   for (i = 0; i < 3; i++)
   {

      for (j = 0; j < 3; j++)
      {

         printf("%d\t", a[i][j]);
      }
      printf("\n");
   }

   for (i = 0; i < 3; i++)
   {int x;
   x=i+1;

      int max = a[i][0];

      for (j = 1; j < 3; j++)
      {

         if (max < a[i][j])
            {max = a[i][j];}
      }
      printf("the largest elements of row %d is %d\n", x, max);
   }
  return 0;
}
 
