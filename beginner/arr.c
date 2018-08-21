#include <stdio.h>
int main()
{
	int array[100],max,n,i;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	max= array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>max)
		{
		max=array[i];
		}
	}
	printf("%d",max);
	return 0;
}
