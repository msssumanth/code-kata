#include<stdio.h>
int main()
{
    char a[]="dhoni",b[10];
    int i,h[26]={0};
     for(i=0;i<10;i++)
    {
        scanf("%c",&b[i]);
    }
    for(i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]+=1;
        
    }
    for(i=0;b[i]!='\0';i++)
    {
        h[a[i]-97]-=1;
    if(h[a[i]-97]<0)
    {
        printf("no");
        break;
    }
    }
    if(b[i]=='\0')
    printf("yes");
    }
