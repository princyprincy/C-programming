#include<stdio.h>
int main()
{
	int N,Q,i;
	scanf("%d",&N);
	scanf("%d",&Q);
	if(Q<=100000)
	{
		for(i=N+1;i<Q;i++)
		{
			if(i%2==0)
			{
				printf("\n%d\n",i);
			}
		}
	}
	else
	{
		printf("invalid");
	}
	return 0;
}	
