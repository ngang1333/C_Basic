#include<stdio.h>
int main()
{
	float n,s=0,k=0;
	printf("\nnhap vao n: ");
	scanf("%f",&n);
	while(n>0)
	{
		s+=n;
		printf("\ntong la %.2f",s);
		printf("\nnhap vao n: ");
		scanf("%f",&n);
		
	}
}	
