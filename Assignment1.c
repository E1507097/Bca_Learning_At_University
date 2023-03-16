//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.
#include<stdio.h>
int main()
{
	int i,posi=0,neg=0,n,k;
	printf("How much number do you want to enter: ");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		scanf("%d",&k);
		if(k>0)
		{
			posi=posi+1;
		}
		else
		{
			neg=neg+1;
		}
	}
	printf("Positive number's are: %d\n",posi);
	printf("Negative number's are: %d\n",neg);
}
