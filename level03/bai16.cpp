#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,bsc;
printf("Nhap so thu nhat:"); 
scanf("%d",&a);
printf("Nhap so thu hai:"); 
scanf("%d",&b);
bsc=a*b;
while (a!=b)
	{	if (a>b) 
		a=a-b; 
		else 
		b=b-a;
	}
printf("uoc so chung la: %d",a);
printf("\nBoi so chung nho nhat: %d",bsc/a);

}


