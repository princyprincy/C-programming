#include<stdio.h>
int main()
{
	int h1,m1,h2,m2,h3,m3;
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	if(m1>m2)
		m3=m1-m2;
	else
		m3=m2-m1;
	if(h1>h2)
		h3=h1-h2;
	else
		h3=h2-h1;
	while(m3>=60)
	{
		m3=m3-60;
		h3--;
	}
	printf("%d %d\n",h3,m3);
}
