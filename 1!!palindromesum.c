#include <stdio.h>
int main()
{
    int a[10],i,j,n,k,sum=0,t,rem;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        rem=t%10;
        sum+=rem;
        t=t/10;
    }
    if(sum<=9&&sum>=0)
    {
    printf("YES");
    }
    else
    {
        if(sum%11==0)
        {
           printf("YES"); 
        }
        else
        printf("NO");
    }
}
