#include<stdio.h>
int main()
{
    int ar[100];
    int i, j , n;
    printf("How many Numbers: ");
    scanf("%d",&n);
    for(i= 0 ; i<n ; i++){
        scanf("%d",&ar[i]);
    }

    int max= ar[0];
    
    for(i=1 ; i<n ; i++){
        if(max <ar[i])
        max= ar[i];
    }
    printf("max is =%d\n" ,max );

}
