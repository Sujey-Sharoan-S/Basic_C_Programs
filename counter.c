// Count the digits in the given Number

#include<stdio.h>
int main()
{
    int Num, count = 0;
    printf("Enter any Number:");
    scanf("%d",&Num);
    while(Num != 0)
    {
        Num /= 10;
        count++;

        printf("\nCount of the Digits in the Given Number is = %d\n",count);

    }
    printf("\nFinal Count of the Digits in the Given Number is = %d\n",count);
    return 0;

    
    
}