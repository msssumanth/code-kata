
#include <stdio.h>
int main()
{ int a[10],b[10],i,c=0,j,n,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    
}
for(i=0;i<n;i++)
{
    if(i%2==0)
    {
       if((a[i]%2)!=0)
      printf("%d ",a[i]);
    }
    else
    {
        if((a[i]%2)==0)
      printf("%d ",a[i]);
    }
}
}
