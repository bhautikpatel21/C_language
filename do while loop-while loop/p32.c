#include<stdio.h>
int main()
{
	int i=1,j,a=11;
	do
	{
		j=1;
		do
		{
			printf(" %d ",a);
			j++;
			a++;
		}while(j<=5);
		a=a+5;
		printf("\n");
		i++;
	}while(i<=5);
	return 0;
}