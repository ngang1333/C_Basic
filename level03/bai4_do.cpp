#include<stdio.h>
int main()
{
	int n,sodao,y ;
	printf("nhap n: ");
	scanf("%d",&n);
	sodao=0;
	
	do
	{
		y=n%10;
		sodao=sodao*10+y;
		n=n/10;
	}
	while(n>0);
	printf("\nso dao la %d",sodao);
	
	
}
