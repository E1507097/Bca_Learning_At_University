//Write a C code to find the maximum element in each row of the 3 X 3 matrix

int main()
{
  int mat[3][3], i, j, max;
    printf("Enter any 3*3 matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat[i][j]);
    }
    max = mat[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max<mat[i][j])
                max = mat[i][j];
        }
    }
    printf("\nLargest Element = %d", max);
    getch();
    return 0;
  
  
}
