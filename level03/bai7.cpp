#include <stdio.h>
int main()
{
	float i,n,s=1,t=0,z=1,k=1,b,t1=0,t2=0,b1,b2;
	printf("nhap n: ");
	scanf("%f",&n);
	if(n==0)
	printf("day khong co phan tu");
	else
	{
		for(i=1;i<=n;i++)
		{
			t=t+i;
			s=s*i;
			b=t/n;
		}	
		printf("tong day la %.2f",t);
		printf("\ntich day la %.2f",s);
		printf("\ntbc la %.2f",b);
		i=1;
		while(i<=n)
		{
			t1=t1+i;
			z=z*i;
			b1=t1/n;
			i++;
		}
		printf("\ntong day la %.2f",t1);
		printf("\ntich day la %.2f",z);
		printf("\ntbc la %.2f",b1);
		i=1;
		do
		{
			t2=t2+i;
			k=k*i;
			b2=t2/n;
			i++;
		}
		while(i<=n);
		printf("\ntong day la %.2f",t2);
		printf("\ntich day la %.2f",k);
		printf("\ntbc la %.2f",b2);
	}
	
}	
