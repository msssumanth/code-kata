#include <stdio.h>

int main()
{
    int a[10],i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { 
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==0)
            { 
                printf("%d %d\n",a[i],a[j]);
                break;
            }
        }
    }

    return 0;
}
