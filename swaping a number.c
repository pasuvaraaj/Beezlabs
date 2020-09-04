#include<stdio.h>
int main()
{
    int x,y;
    int temp;
    printf("Enter x and y");
    scanf("%d\n%d",&x,&y);
    printf("Before Swapping\nx=%d\ny=%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("After Swapping without a third variable\nx=%d\ny=%d",x,y);
}