#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,n,bk,canh,cd,cr;
	float cv,dt,p,pi=3.14;
	printf("nhap vao a,b,c,bk,canh,cd,cr:  ");
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&bk,&canh,&cd,&cr);
	printf("nhap n:"); scanf("%d",&n);
	
	if(n==1)
		{	cv=a+b+c;
			p=(a+b+c)/2;
			dt=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("chu vi hinh tam giac la %.2f",cv);
			printf("\ndien tich hinh tam giac la: %.2f",dt);
		}
	if(n==2)
		{	cv=canh*4;
			dt=canh*canh;
			printf("chu vi hinh vuong la %.2f",cv);
			printf("\ndien tich hinh vuong la: %.2f",dt);
		}
	if(n==3)
		{	cv=(cd+cr)*2;
			dt=cd*cr;
			printf("chu vi hinh cn la %.2f",cv);
			printf("\ndien tich hinh cn la: %.2f",dt);
		}
	if(n==4)
		{	cv=bk*2*pi;
			dt=bk*bk*pi;
			printf("chu vi hinh tron la %.2f",cv);
			printf("\ndien tich hinh tron la: %.2f",dt);
		}
		
}
