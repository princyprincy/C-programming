#include<stdio.h>
int main()
{
	int n,k,i,sum;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	
	for(i=0;i<=k;i++)
	{
		sum=sum+i;
	}
	printf("\n%d\n",sum);
	return 0;
}
	
