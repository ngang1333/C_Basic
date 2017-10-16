#include<stdio.h>
int main() 
{
	int i,s1=0,n,k1=0,z1=0;
	float s2=0,k2=0,z2=0;
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{	s1+=i;
		s2+=(1.0/i);
		}
	printf("tong s1 la: %d",s1);	
	printf("\ntong s2 la: %.2f",s2);
	i=1;
	while(i<=n)
	{
		k1+=i;
		k2+=(1.0/i);
		i++;
	}
	printf("\ntong k1 la: %d",k1);	
	printf("\ntong k2 la: %.2f",k2);
	i=1;
	do
	{
		z1+=i;
		z2+=(1.0/i);
		i++;
	}
	while(i<=n);
	printf("\ntong z1 la: %d",z1);	
	printf("\ntong z2 la: %.2f",z2);
}
