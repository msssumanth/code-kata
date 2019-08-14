#include<stdio.h>
int main()
{
     int n,k=1,i;
     unsigned long long int a[1000000];
     a[0]=3;a[1]=4;
     scanf("%d",&n);
    for(i=0;i<n;i++)
   { 
    a[++k]=(a[i]*10)+3;
    a[++k]=(a[i]*10)+4;
    }
   for(i=0;i<n;i++)
   {
       if(i+1==n)
   {
   printf("%llu",a[i]);
   }
   }
return 0;
}
