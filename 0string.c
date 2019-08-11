#include <stdio.h>
int main()
{
    char s[20];
    gets(s);
    int i,j,n,h[26]={0},k=0;
    for(i=0;s[i]!='\0';i++)
    {
        h[s[i]-97]+=1;
    }
    for(i=0;i<26;i++)
    {
        if(h[i]>2)
        {
          printf("%c",i+97); 
          k++;
        }
       }
       if(k==0)
       {
           printf("%s",s);
       }
     return 0;
}
