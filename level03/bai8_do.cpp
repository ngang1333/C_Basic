#include<stdio.h>
int main()
{
		int n,a,d ;
	printf("nhap n: ");
	scanf("%d",&n);
	    a=n%10;
do
	{
		
		d=n%10;
		n=n/10;
	}
	while(n>0);
	printf("\nchu so dau tien la %d",d);
	printf("\nchu so cuoi cung la %d",a);
	}
