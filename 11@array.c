#include <stdio.h>
#include<math.h>
int main()
{
    int a[10],i,n,j,temp=0,k=0,c=0,sum,minsum,mini,minj;
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
    minsum=a[0]+a[1];
    mini=0;
    minj=1;
for(i=0;i<n;i++)
{ 
for(j=i+1;j<n;j++)
{ 
    sum=a[i]+a[j];
  if(abs(minsum)>abs(sum))
  {
      minsum=sum;
      mini=i;
      minj=j;
      
  }}}
   
    printf("%d %d",a[mini],a[minj]);

}
