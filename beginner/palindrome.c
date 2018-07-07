#include<stdio.h>
int main()
{
	int a,rem,rev=0,t;
	scanf("%d",&a);	
	t=a;
	if(a<=1000)
	{
		while(a>0)
		{
			rem=a%10;
			a=a/10;
			rev=rev*10+rem;
		}
		if(rev==t)
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
