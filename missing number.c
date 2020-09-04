#include<stdio.h>
{
    int findMissingNo(int *arr,int len)
    {
        int n=len+1,sum=0;
        for(int i=0;i<len;i++)
        {
            sum=sum+arr[i];
        }
        return (n*(n+1))/2-sum;
    }
    int main()
    {
        int arr[8]={1,2,4,6,3,7,8};
        printf("%d",findMissingNo(arr,8));
    }
}