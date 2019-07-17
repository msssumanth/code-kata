#include <stdio.h>

int main()
{
    int a[10],i,n,b,j,temp=0,count=0;
    scanf("%d %d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        count+=1;
       
    }
    if(count>=1)
    {
        printf("Yes");
    }
    else
    printf("No");

    return 0;
}
