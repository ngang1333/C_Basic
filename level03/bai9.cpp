#include<stdio.h>
int main()
{
	int n,i,min=n,a;	
	printf("\nnhap vao n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=n)
	{if(min>i)
	min=i;
	printf("min la %d", min);}
	
}	
	
