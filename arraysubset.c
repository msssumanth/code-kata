

#include <stdio.h>
#include<math.h>
int main()
{
    int a[10],i,n,n1,j,k=0,c=0,b[10];
    scanf("%d %d",&n,&n1);
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(j=0;j<n1;j++)
    {
        scanf("%d",&b[j]);
    }
    
    
    
        for(j=0;j<n1;j++)
        {
            for(i=0;i<n;i++)
            {
            if(a[i]==b[j])
            {
                k++;
            }
        }
    }
   if(k==n1)
   {
       printf("YES");
   }
   else
   printf("NO");
}
