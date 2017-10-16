#include<stdio.h>
int main()
{
	int n,sodao,k ;
	printf("nhap n: ");
	scanf("%d",&n);
	sodao=0;
	for(;n>0;)
	{
		k=n%10;
		sodao=sodao*10+k;
		n=n/10;
	}
	printf("\nso dao la %d",sodao);
}
