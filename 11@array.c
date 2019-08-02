#include <stdio.h>
int main()
{
    int a[10],i,n,j,temp=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { 
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            { 
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
for(i=0;i<n;i++)
{ 
for(j=i+1;j<n;j++)
{
  if(a[i]+a[j]==0)
 {   k++;
    printf("%d %d",a[i],a[j]);
 }
    
}  }
    if(k==0)
    {
        printf("%d %d",a[0],a[1]);
        
    }    
    }
    
