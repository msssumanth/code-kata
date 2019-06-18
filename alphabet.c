#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(((a>=65)&&(a<=91))||((a>=97)&&(a<=123)))
	{
	printf("Alphabet");
	}
	else
	printf("No");
	
	return 0;
}
