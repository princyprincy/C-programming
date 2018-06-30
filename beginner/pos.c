#include<stdio.h>
int main()
{
	int a;
	if(1<=a<=10000)
	{
		scanf("%d",&a);
		if(a>0)
			printf("Positive");
		else if(a<0)
			printf("Negative");
		else
			printf("Zero");
	}
	return 0;
}
