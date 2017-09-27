#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	float s;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	if(n>=1)
	{s=sqrt(n);
	if(s==(int)s)
	printf("so %d la so chinh phuong",n);
	else
	printf("so %d khong phai la so chinh phuong",n);
	}
}
