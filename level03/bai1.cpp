#include <stdio.h>
int main()
{
	int i,n,s=1,k=1,z=1;
	printf("nhap n:");
	scanf("%D",&n);
	for(i=1;i<=n;i++)
	{
	s=s*i;}
	printf("tich la %d",s);
	i=1;
	while (i<=n)
	{	
		k=k*i;
		i++;
	}
	printf("\ntich la: %d",k);
	i=1;
	do
	{	z=z*i;
		i++;
	}
	while(i<=n);
	printf("\ntich la: %d",z);
}
