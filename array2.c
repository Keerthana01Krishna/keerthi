/*program to find the even elements*/
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=size;i++)
    {
        if((arr[i]&1)==0)
    {
        printf("%d\t",arr[i]);
    }
}
    return 0;
}