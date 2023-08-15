//Conversion of decimal into binary
#include<stdio.h>
int main()
{
    int num,arr[100];
    printf("Enter a number in decimal :");
    scanf("%d",&num);
    int i=0,count=0,r,q;
    while(num>0)
    {
        i++;
        r=num%2;
        arr[i]=r;
        num=num/2;
    }
    count=i;1
    for(i=count;i>0;i--)
    {
        printf("%d",arr[i]);
    }
}
