#include<stdio.h>
int main()
{
    int Num, Sum = 0, i;
    printf("Enter any Number:");
    scanf("%d",&Num);
    for(i=1;i<=Num;i++)
    {
        Sum += i;
        
    }
    printf("\nSum of the First N Number is = %d\n",Sum);
    
    return 0;
}