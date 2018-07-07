#include<stdio.h>
int main()
{
	int a,rem,rev=0,t;
	scanf("%d",&a);	
	t=a;

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
	return 0;
}  
