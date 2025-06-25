/*program to read the elements and size of an array*/
#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of elements\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements\n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }printf("the elements are\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}