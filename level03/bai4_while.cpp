#include<stdio.h>
int main()
{
	int n,sodao,k,x,y ;
	printf("nhap n: ");
	scanf("%d",&n);
	sodao=0;
	
	while(n>0)
	{
		k=n%10;
		sodao=sodao*10+k;
		n=n/10;
	}
	printf("so dao la %d",sodao);
}
