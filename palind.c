#include <stdio.h>



int main()

{
    
int n,temp,r,sum=0;
 
scanf("%d",&n);
    
temp=n;
    
   
 while(n>0)
    
{
       
 r=n%10;
 
       
sum=sum*10+r;
        
n=n/10;
       
 }
        
if(temp==sum)
       
 printf("yes");
        
else
        
printf("no");
   
 
}
