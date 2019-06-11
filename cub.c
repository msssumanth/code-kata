#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	
}
