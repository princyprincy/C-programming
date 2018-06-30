#include<stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	if((n>='a'&& n<='z')||(n>='A'&& n<='Z'))
	{
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
		printf("Vowel");
	else
		printf("Consonant");
	}
	else
	{
		printf("invalid");
	}
	return 0;
}
