/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
            b[j]=temp;}
        }
        if(j>=1)
        {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[j]);
        }
        }
        else
        {
        printf("-1");
        } 
     
     }
