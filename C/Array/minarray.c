#include<stdio.h>
int main()
{
    int ar[100];
    int i ,n;
    printf("how many numbers: ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min= ar[0];
    for(i=1 ; i<n ; i++){
        if(min> ar[i])
        min = ar[i];
    }
    
    printf("min num is : %d\n", min);
}