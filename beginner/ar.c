#include <stdio.h>
int main()
{
	int array[100],min,n,i;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	min= array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]<min)
		{
		min=array[i];
		}
	}
	printf("%d",min);
	return 0;
}
