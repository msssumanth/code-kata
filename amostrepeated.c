#include <stdio.h>
int main()
{
   int n,a[20],i,j,out;
   int maxcount=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     int temp=a[i];
     int count=0;
     for(j=i+1;j<n;j++)
     {
         if(temp==a[j])
         {
             ++count;
         }}
         if(count>maxcount)
         {
            out=temp;
            maxcount=count;
         }
     }
     printf("%d",out);
     return 0;
}
