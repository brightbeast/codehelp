#include<stdio.h>
int main()
{
    printf("----------");
    int arr[150];
    for(int i=0; i<20; i++)
    {
        arr[i]=i+1;
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
    for(int i=20; i<40; i++)
    {
        arr[i]=i+1;
        printf("%d",arr[i]);
        printf(" ");
    }



    return 0;
}