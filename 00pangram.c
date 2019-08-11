#include <stdio.h>
int main()
{
    char s[200];
    gets(s);
    int i,j,n,h[26]={0},k=0;
    for(i=0;s[i]!='\0';i++)
    {   if(s[i]>='a'&&s[i]<='z')
        h[s[i]-97]+=1;
        else
        if(s[i]>='A'&&s[i]<='Z')
        h[s[i]+32]+=1;
    }
    for(i=0;i<26;i++)
    { 
        if(h[i]>=1)
        {
          k++;
        }
       }
       if(k>=26)
       {
           printf("yes");
       }
       else
       printf("no");
     return 0;
}
