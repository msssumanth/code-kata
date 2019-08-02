#include<stdio.h>
int main()
{
    int a[20],i,j,n,k,temp=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {   
    if(a[i]<a[j])
    {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
    }}}
    for(i=0;i<n;i++)
    {   if(i+1==k)
        printf("%d",a[i]);
    }
    
    return 0;
    
}
