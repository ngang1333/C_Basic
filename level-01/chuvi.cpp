#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float d,s,p;
	printf("nhap a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	d=(a+b+c);
	p=(a+b+c)/2;
	s=sqrt((p-a)*(p-b)*(p-c));
	printf("chu vi la: %.2f",d);
	printf("\ndien tich la: %.2f",s);
	
}
