#include <stdio.h>
int main()
{
	int i,n=1,s=0,k=0,z=0;
	printf("nhap vao n: ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		if(i%2==0)
		printf("\n%d    ",i);
		i=1;
		while(i<n)
		{ 	i++;
			if(i%2==0)
			printf("\n%d    ",i);
		}
		i=1;	
		do
		{	 	i++;
			if(i%2==0)
			printf("\n%d    ",i);
		}
		while(i<n);
	
}
