#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int first,diff,n,value,sum=0,i;
	scanf("%d",&n);
	scanf("%d%d",&first,&diff);
	value = first;
	for(i=0;i<n;i++)
	{
        	sum += value;
        	value = value + diff;
	}

	printf("%d",sum);
	return 0;
}
