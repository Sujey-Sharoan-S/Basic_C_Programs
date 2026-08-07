#include<stdio.h>
int main()
{
    int a, b, sum;
    while(1)
    {
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("Enter a Number: ");
    scanf("%d",&b);
    if(a<0 || b<0)
    {
        printf("enter valid nummbers\n");
        continue;
    }
    sum =a+b;
    break;

}
    printf("the Sum is %d", sum);
    return 0;

}