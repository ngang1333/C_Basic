#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2,x;
	printf("nhap a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
		if(b==0)
		printf("phuong trinh khong co nghiem");
		else
		{
			if(c!=0)
		{	x=-c/b;
		printf("phuong trinh co 1 nghiem x1= %.2f",x);
		}
				else
	{printf("phuong trinh co vo so nghiem");}	
		}}
	else
	{
		d=b*b-4*a*c;
		if(d<0)
		printf("phuong trinh vo nghiem");
		if(d>0)
			{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("nghiem phuong trinh la x1= %.2f, x2= %.2f",x1,x2);
			}
			if(d==0)
			{x1=x2=-b/(2*a);
			printf("nghiem kep la:x1=x2= %.2f",x1);}
			}
}
