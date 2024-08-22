#include<stdio.h>
#include<string.h>
int main()
{
 int nS;
 //reading the number of strings
 printf("Enter the number of strings: ");
 scanf("%d" ,&nS);
 getchar(); // Consume the newline character left in the buffer after scanf
 
 if(nS<=0){
    printf("the number of string should positive:\n");
    return 1;
 }
 
    char s[nS][100];
    int lenght[nS];
    int len =0;
 // reading the stings 
 for(int i=0; i<nS; i++){

   printf("enter the string %d: ",i+1);
   fgets(s[i], sizeof(s[i]), stdin);

   //remove newline character
   int len =strlen(s[i]);
   if(len>0 && s[i][len-1]=='\n'){
    s[i][len-1]='\0';
    len--;
   }
   lenght[i]= len;
 }
  
  //printing the strings
  printf("\nEntered strings: \n");
  for(int i=0; i<nS; i++){
  printf("string %d: %s\n",i+1, s[i]);
  }
  
  printf("\n\n");

  ///asking user choice 
  char c;
  printf("do you want to see the lenghts of the strings? (y/n): ");
  scanf("%c", &c);
 // getchar();

  if(c== 'y' || c== 'Y'){
    int strIndex;
    printf("enter the string index(1 to %d) you want to see the length of: ", nS);
    scanf("%d", &strIndex);
    getchar();
    if(strIndex>=1 && strIndex<= nS){
       printf("the length of the string %d is = %d\n", strIndex, lenght[strIndex-1]);
    }
    else{
      printf("invalid index.\n");
    }
  }
    else if(c== 'n' || c=='N'){
    printf("thanks\n");
  }
  else{
    printf("invalid choice\n");
 }

  printf("\n\n");

  //if user want to copy the strings
  printf("do you want to copy the strings:?(y/n): ");
  scanf(" %c", &c);
  getchar();

  if(c== 'y' || c== 'Y'){

    int sIdx, desIdx;
    printf("enter the source string index(1 to %d): ",nS);
    scanf("%d", &sIdx);
    printf("enter the destination string index(1 to %d): ",nS);
    scanf("%d", &desIdx);
    getchar();

    sIdx--;
    desIdx--;

    if(sIdx>=0 && sIdx<nS && desIdx>=0 && desIdx<nS){
     strcpy(s[desIdx],s[sIdx]);
     printf("string %d copied to string %d\n", sIdx+1, desIdx+1);
    }
    else{
      printf("invalid index\n");
    }
    printf("string after copy:\n");
    for(int i=0; i<nS; i++){
      printf("string %d: %s\n", i+1,s[i]);
    }
  
  }
    else if(c== 'n' || c=='N'){
    printf("thanks\n");
  }
   else{
    printf("invalid choice\n");
 }
 


}