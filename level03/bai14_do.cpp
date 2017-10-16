#include<stdio.h>
int main()
{
	int n,i,j;
	printf("nhap vao n: ");
	scanf("%d",&n);
	i=1;
	do
	{
		i++;
		j=1;
		{	
			do
			{
				j++;
				printf("*");
				printf(" ");
			}
			while(j<=n);
		}
			printf("\n");
	}
	while(i<=n);	
	
}	
