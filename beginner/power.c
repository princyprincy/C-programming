#include<stdio.h>
int main()
{
	int n,a,i,sum=1;
	scanf("%d",&a);
	scanf("%d",&n);
	while(n!=0)
	{
		sum=sum*a;
		--n;
	}
	printf("%d",sum);
	return 0;
}
