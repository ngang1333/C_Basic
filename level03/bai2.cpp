#include <stdio.h>
int main()
{
	int i,s=0,k=0,z=0;

		for(i=8;i<=46;i++)
		if(i%2!=0)
		s++;
		printf("co %d so le",s);
		for(i=8;i<=46;i++)
		if(i%2!=0)
		printf("\n%d    ",i);
		i=8;
		while(i<46)
		{  	i++;
			if(i%2!=0)
			k++;
		}
		printf("\nco %d so le",k);
		i=8;
		while(i<46)
		{ 	i++;
			if(i%2!=0)
			printf("\n%d    ",i);
		}
			
		i=8;
		do
		{	i++;
			if(i%2!=0)
			z++;
		}
		while(i<46);
			printf("\nco %d so le",z);
		
			i=8;
		do
		{	 	i++;
			if(i%2!=0)
			printf("\n%d    ",i);
		}
		while(i<46);
	
}
