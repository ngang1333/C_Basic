#include<stdio.h>
int main()
{
	int n,i,j;
	printf("nhap vao n: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{	i++;
		j=1;
		while(j<=n)
		{
			j++;
			printf("*");
				printf(" ");
		}
			printf("\n");
		}
}	
