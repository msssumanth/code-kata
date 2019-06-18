#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	 if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	 {
	 	printf("vowel");
	 }
	 
	 else
	 {
	  if(((a>=65)&&(a<=91))||((a>=97)&&(a<=123)))
	  {
		   	 
	 printf("Consonant");
}
	else
	printf("Invalid");
}

	return 0;
}
