#include <stdio.h>
void main()
{
	int array[30],i,j,t,n;
	scanf("%d", &n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++) 
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j]) 
			{
				t=array[i];
				array[i]=array[j];
				array[j]=t;
			}
		}
	}
	for(i=0;i<n;++i)
	{
		printf("%d\n",array[i]);
	}
}
