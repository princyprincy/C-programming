#include <stdio.h>
int main()
{
	int low,high,i,j,flag;
	scanf("%d%d",&low,&high);
	for(i=low+1;i<high;i++)
	{
		flag = 0;
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d\n",i);
	}
	return 0;
}
