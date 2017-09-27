#include <stdio.h>
#include <math.h>
int main()
{
	float n,s;
	
	printf("nhap n: ");
	scanf("%f",&n);
	s=n-0.5;
	if(s==int(s))
	printf("so %.2f la so ban nguyen",n);
	else 
	printf("so %.2f khong phai so ban nguyen",n);
	
}
