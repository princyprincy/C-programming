#include<stdio.h>
int main()
{
	int a,r,sum,t;
	scanf("%d",&a);	
	t=a;
	if(a<=100000)
	{
		while(a>0)
		{
			r=a%10;
			a=a/10;
			sum=sum+(r*r*r);
		}
		if(sum==t)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("invalid");
	}                                                                                       
	return 0;
}  
