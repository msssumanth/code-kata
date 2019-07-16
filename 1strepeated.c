
#include <stdio.h>
int main()
{ int a[10],b[10],i,c=0,j,n,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
{
  if(a[i]==a[j])
  {
      c=c+1;
  }}
  if(c>=1)
  break;
 
}

if(c>=1)
printf("%d",a[i]);
else
printf("unique");
    return 0;
}
