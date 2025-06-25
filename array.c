#include<stdio.h>
int main()
{ 
    int arr[5];
    arr[0]=1;
    arr[1]=4;
    arr[2]=2;
    arr[3]=3;
    arr[4]=5;
    arr[5]=6;
    for(int i=0;i<=5;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}