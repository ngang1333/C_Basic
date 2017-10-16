#include <stdio.h>
int main()
{
	int i,n,m,s=0,k=0,z=0;
	printf("nhap n: "); scanf("%d",&n);
	printf("\nnhap m: "); scanf("%d",&m);
		for(i=n;i<=m;i++)
		if(i%2!=0)
		s++;
		printf("co %d so le",s);
		
		i=n;
		while(i<m)
		{  	i++;
			if(i%2!=0)
			k++;
		}
		printf("\nco %d so le",k);
		
			
		i=n;
		do
		{	i++;
			if(i%2!=0)
			z++;
		}
		while(i<m);
			printf("\nco %d so le",z);
		
		
}
