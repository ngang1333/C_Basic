#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a,b,c,n;
	printf("nhap n: ");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	c=n/10;
	printf("so dao cua n la %d%d%d",a,b,c);
}
