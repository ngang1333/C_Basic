#include <stdio.h>
#include <conio.h>
int main()
{
	int n,t,m;
	printf("nhap ngay: "); scanf("%d",&n);
	printf("\nnhap thang: ");scanf("%d",&t);
	printf("\nnhap nam: "); scanf("%d",&m);
	if(n>31||t>12||m<0)
	printf("khong phai o trai dat");
	else
	{
	if(m%4==0)
	{
		if(t==2)
			{	if(n>29)
				printf("khong xac dinh");
				else
				printf("%d/%d/%d",n,t,m%100);
			}
		else
			printf("%d/%d/%d",n,t,m%100);
		
		
	}
		else
		{
			if(t==2)
			{	if(n>28)
				printf("khong xac dinh");
				else
				printf("%d/%d/%d",n,t,m%100);
			}
			else
			printf("%d/%d/%d",n,t,m%100);
		}
}
}
