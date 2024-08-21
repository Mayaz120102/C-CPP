#include<stdio.h>
#include<string.h>
int main()
{
   char s1[30];
   char s2[30];
   printf("enter the s1: ");
   fgets(s1, sizeof(s1), stdin);
   int i=0, j,len=0;
   while (s1[i]!='\0')
   {
     i++;
     len++;
   }

     // Remove the newline character at the end if it exists
    if(s1[len - 1] == '\n') {
        s1[len - 1] = '\0';
        len--;  // Adjust length after removing newline
    }

   for(j=0, i=len-1;i>=0; i--,j++)
   {
    s2[j] = s1[i];
   }
   s2[j]='\0';

   printf("%s\n",s1);
   printf("%s\n", s2);
   
   int d= strcmp(s1,s2);
   if(d==0){
    printf("palindrome");
   }
   else{
    printf("not palindrome");
   }

}