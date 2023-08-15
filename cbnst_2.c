//swap adjacent numbers
#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("Enter number of elements in an array : ");
    scanf("%d",&n);
    printf("Enter array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n){
        int t;
        t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
        }
    }
    printf("After swapping adjacent numbers new array :");
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
