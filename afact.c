#include<stdio.h>
int main()
{
    int x,y=1,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        y=y*i;    }
    printf("%d",y);
}
