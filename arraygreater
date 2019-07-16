#include <stdio.h>
#include<math.h>
int main()
{
    int a[10],i,n,j,sum=0,temp=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }
    }
    for(i=0;i<n;i++)
    {
        if((i)!=n)
        {
        k=pow(10,i);
        sum+=k*a[i];
        
        }
            
    }  
    printf(" %d ",sum);

    return 0;
}
