#include<stdio.h>
int main()
{
    int a[] = {10,20,35,15,30};
    int i, n;
    printf("Enter the number: ");
    scanf("%d" ,&n);
    int pos = -1;
    for(i=0; i<5; i++){
       if( n== a[i])
       {
         pos = i+1;
         break;
       }

    }

    if(pos== -1)
    printf("not found");
    else
    printf("the pos is :%d\n",pos);


}