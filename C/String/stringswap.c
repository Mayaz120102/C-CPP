#include<stdio.h>
#include<string.h>
int main()
{

  char s1[30], s2[30], temp[30];
  printf("enter the s1: ");
  fgets(s1, sizeof(s1), stdin);
  int len1= strlen(s1);
  if(s1[len1-1]== '\n'){
    s1[len1-1]='\0';
  } 
 printf("enter the s2: ");
 fgets(s2, sizeof(s2),stdin);
 int len2 = strlen(s2);
 if(s2[len2-1]=='\n'){
    s2[len2-1]= '\0';
 }
 printf("before: \n");
 printf("s1= %s\n" ,s1);
 printf("s2= %s\n", s2);

 strcpy(temp,s1);
 strcpy(s1,s2);
 strcpy(s2,temp);

 //after swaping
 printf("after: \n");
 printf("s1= %s\n",s1);
 printf("s2= %s\n",s2);
  

}