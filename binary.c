/*program to search the element in binary search*/
#include<stdio.h>
int findMin(int arr[],int n, int key, int low, int high)
{
    int index=-1;
    int element=key;
    
     while(low<=high)
    {   
        int low=0, high=n-1, mid=0;
        mid=low+high/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid>=key])
        {
            return high=mid-1;
            
        }
        else if (arr[mid]<=key)
        {
           return low=mid+1;
        }
        
       return index; 
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int key=8;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",findMin(arr,n,key,low,high));
    return 0;
}

