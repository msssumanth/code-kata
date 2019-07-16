#include <stdio.h>
int main()
{
    int a[10],i,j,n,k=0,s;

    scanf("%d",&n);
    s=n*(n-1)*0.5;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(a[i]==a[j])
           {
               k+=i+j;
           }
        }
    }
    printf("%d",a[s-k]);
    return 0;
}

