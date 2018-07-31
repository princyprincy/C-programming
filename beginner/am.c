#include<stdio.h>
int main()
{
	int n1,n2,temp,sum,r,n;
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n2<=100000)
	{
		for(n=n1;n<=n2;n++)
		{
			temp=n;
			sum=0;
			while(temp!=0)
			{
				r=temp%10;
				temp=temp/10;
				sum=sum+(r*r*r); 
			}
			if(sum==n)
			{
				printf("%d\n",n);
			}
		}
	}                                                                                      
	return 0;
} 
