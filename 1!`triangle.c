#include <stdio.h>
int main()
{
    int n,i,j,temp=0,g;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<=n-i-1;j++)
    {
       printf("1 "); 
    }
    printf("\n");
}
   return 0;
}
