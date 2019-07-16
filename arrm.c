include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,temp1,temp2,hogh,low,rem,res=0,n=0;
	
	scanf("%d %d",&low,&hogh);
	for(i=low;i<hogh;++i)
	{
		temp1=i;
		temp2=i;
		while(temp1!=0)
		{
			temp1/=10;
			++n;
		}
		while(temp2!=0)
		{
			rem=temp2%10;
			res+=pow(rem,n);
			temp2=temp2/10;
			
		}
		if(res==i)
		printf("%d\n",i);
	
		
	n=0;res=0;	
	
}
	return 0;
}
