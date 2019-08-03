#include <stdio.h>
int main()
{
    int i,j,k=0,n,c;
    int a[10];
     scanf("%d %d",&n,&c);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
        {    
            if(a[i]+a[j]==c)
            {
                k++;
            }
        }
        }
        if(k>=1)
            printf("yes");
        else
        printf("no");
    }
