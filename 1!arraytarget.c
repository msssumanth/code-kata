#include <stdio.h>
int main()
{
    int a[10],i,j,n,k,p=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {   
        if(a[i]+a[j]==k)
        {
           p++; 
        }
    }    
    }     
    if(p>=1)
    {
       printf("YES");
    }
    else
    printf("NO");
}
