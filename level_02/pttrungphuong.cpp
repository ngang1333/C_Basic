#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,xa,xb,x;
	printf("nhap a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	if(a!=0)
	{
		d=b*b-4*a*c;
		if(d>0)
			{
				xa=(-b+sqrt(d))/(2*a);
				xb=(-b-sqrt(d))/(2*a);
				if(xa>0 && xb>0)
					{
						printf("nghiem thu nhat cua phuong trinh la %.2f",sqrt(xa));
						printf("\nnghiem thu hai cua phuong trinh la %.2f",-sqrt(xa));
						printf("\nnghiem thu ba cua phuong trinh la %.2f",sqrt(xb));
						printf("\nnghiem thu tu cua phuong trinh la %.2f",-sqrt(xb));
					}
				if(xa>0 && xb==0)
					{
						printf("\nnghiem thu nhat cua phuong trinh la %.2f",sqrt(xa));
						printf("\nnghiem thu hai cua phuong trinh la %.2f",-sqrt(xa));
						printf("\nnghiem thu ba cua phuong trinh la 0");
					}
				if(xa>0 && xb<0)
					{
						printf("\nnghiem thu nhat cua phuong trinh la %.2f",sqrt(xa));
						printf("\nnghiem thu hai cua phuong trinh la %.2f",-sqrt(xa));
					}
				if(xa==0 && xb>0)	
					{
						printf("\nnghiem thu ba cua phuong trinh la %.2f",sqrt(xb));
						printf("\nnghiem thu tu cua phuong trinh la %.2f",-sqrt(xb));
						printf("nghiem thu ba cua phuong trinh la 0");
					}	
				if(xa<0 && xb >0)	
					{
						printf("\nnghiem thu ba cua phuong trinh la %.2f",sqrt(xb));
						printf("\nnghiem thu tu cua phuong trinh la %.2f",-sqrt(xb));
					}
				if(xa==0 && xb ==0)	
					{
						printf("nghiem  cua phuong trinh la 0");
					}
				if(xa<0 && xb<0)
					{
						printf("phuong trinh vo nghiem");
					}	
			}
		if(d=0)
			{
				xa=-b/(2*a);
				if(xa>0)
					{
						printf("nghiem thu nhat cua phuong trinh la %.2f",sqrt(xa));
						printf("nghiem thu hai cua phuong trinh la %.2f",-sqrt(xa));
					}
				if(xa==0)
					{
						printf("nghiem  cua phuong trinh la 0");
					}
				if(xa<0)
					{
						printf("phuong trinh vo nghiem");
					}
			}
		if(d<0)
			{
				printf("phuong trinh vo nghiem");
			}
	}
	else 
		{	
			if(b==0)
				{	
					printf("phuong trinh khong co nghiem");
				}
			else
				{
					if(c==0)
					{
						printf("phuong trinh co vo so nghiem");
					}
					else
					{	
						x=-c/b;
						if(x>0)
						{
							printf("nghiem 1 cua phuong trinh la %.2f",sqrt(x));
							printf("nghiem 1 cua phuong trinh la %.2f",-sqrt(x));
						}
						else
						 printf("phuong trinh vo nghiem");
					}
				}
			
		}	
	
}
