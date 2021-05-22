#include <stdio.h>
main()
{
	int k,min,max,i;
	scanf("%d",&k);
	if(k<=6)
	{
		max = k-1;
		for(i=1;i<k;i++)
		{
			if((i+max)==k)
			{
				printf("%d %d",i,max);
			}
			printf("\n");
			max--;
		}
	}
	if(k>6)
	{
		max=6;
		min = k-max;
		for(i=1;i<k;i++)
		{
			if(max<0||min>6){
				break;
			}
				
			printf("%d %d",min,max);
			
			printf("\n");
			max--;
			min++;
			
		}
		
	}
}