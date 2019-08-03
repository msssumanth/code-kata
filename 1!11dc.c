#include<stdio.h>
int main()
{
    int n,temp,rem,a[10],i,j,k,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
    {
       for(k=j+1;k<n;k++)
    {
       if((i<j<k)&&a[i]<a[j]&&a[k]>a[j]&&a[k]>a[i])
        {
           printf("%d %d %d\t",a[i],a[j],a[k]);
           b++;
        }
    }
    }
    }
printf("%d",b);
    return 0;
}
