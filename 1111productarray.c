#include <stdio.h>
int main()
{
    int a[10],i,j,n,k,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
         p*=a[i];
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",p/(a[i]));
    }
}
