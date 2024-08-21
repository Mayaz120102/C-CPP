#include<stdio.h>
#include<string.h>
int main()
{
   char s1[30]="abrar mayaz";
   char s2[30];
   int i=0, j,len=0;
   while (s1[i]!='\0')
   {
     i++;
     len++;
   }
   for(j=0, i=len-1;i>=0; i--,j++)
   {
    s2[j] = s1[i];
   }
   s2[j]='\0';
   printf("%s\n",s1);
   printf("%s", s2);

}