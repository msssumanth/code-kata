#include <stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%10==3)
        {
            int flag=1;
            for(j=2;j<=i/2;j++)
            { 
                if(i%j==0)
               {
                flag=0;
               }
            }
            if(flag=1)
            {
                c+=i;
            }
        }
    }
    printf("%d",c);

    return 0;
}
