
#include <stdio.h>
int main()
{
   char s[100];
   int i,j,h[52]={0};
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>=97&&s[i]<=122)
       {
       h[s[i]-97]+=1;
       }
       else
       h[(s[i]-65)+26]+=1;
   }
   for(i=52;i>=0;i--)
    {
   if(h[i]==1)
   {if((i>=27&&i<=52))
        printf("%c",i+65-26);
        else
        {
            printf("%c",i+97);
        }
      
    }}
      return 0;
}
