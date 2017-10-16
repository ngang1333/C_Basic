#include<stdio.h>
int main()
{
	int i,n,s=1,z=1,k=1;
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s=s*2*i;
	printf("tong la %d",s);
	i=0;
	while(i<n)
	{
		i++;
		z=z*2*i;
	}
		printf("\ntong la %d",z);
		i=0;
	do
	{		
		i++;
		k=k*2*i;}
	while(i<n);
	printf("\ntong la %d",k);
}
