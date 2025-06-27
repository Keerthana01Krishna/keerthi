/*program to find the different between min and max*/
#include<stdio.h>
int main()
{   
    int arr[]={3,6,1,8,24,2,62,54};
    int min=arr[0];
    int max=arr[0];
    int i,n=8;
    for(int i=0;i<=n;i++)
    {
        if(min>arr[i])
        {
           min=arr[i];
        }
    }
    printf("The lowest element is %d\n",min);
    for(i=0;i<=n;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
    
        }

    printf("The highest element is %d\n",max);
    {
            int result=max-min;
            printf("the max element is %d", max);
            printf("the minimum element is %d", min);
            printf("the difference=%d\n", result);
        }ev
        return 0;

}