#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float s;
	printf("nhap a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/3;
	printf("trung binh la %.3f",s);
	return 0;
}
