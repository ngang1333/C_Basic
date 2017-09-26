#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	float a,b,s;
	printf("nhap a,b: ");
	scanf("%f ",&a);
	scanf ("%f",&b);
	s=log(b)/log(a);
	printf("%.2f",s);
	return 0;
}
