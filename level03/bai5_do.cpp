#include<stdio.h>
int main()
{
	float n,s=0,k=0;
	
	do
	{printf("\nnhap vao n: ");
	scanf("%f",&n);
	s+=n;
	printf("\ntong la %.2f",s);
	}
	while (n>0);
}	
