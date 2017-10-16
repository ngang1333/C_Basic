#include<stdio.h>
int main()
{
	int n,a,b,c,d ;
	printf("nhap n: ");
	scanf("%d",&n);
	    a=n%10;
	while(n>0)
	{
		b=n%10;
		n=n/10;
	
	}
	printf("chu so dau tien la %d",b);
	printf("\nchu so cuoi cung la %d",a);
	for(;n>0;)
	{
		c=n%10;
		n=n/10;
	}
	printf("\nchu so dau tien la %d",c);
	printf("\nchu so cuoi cung la %d",a);
	
}

