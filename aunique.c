#include<stdio.h>
int main()
{
    int n,a[10],b[10],j=0,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         if(i==a[i])
         {
           b[j]=a[i];
           j++;
           c++;
         }
     }
     for(j=0;j<c;j++)
     {
        if(b[j]>b[j+1])
        {
            int temp=0;
            temp=b[j];
            b[j]=b[j+1];
            b[j]=temp;
        }
        for(j=0;j<c;j++)
        {
            printf("%d ",b[j]);
        }
        
         
     }
     
    
   
}
