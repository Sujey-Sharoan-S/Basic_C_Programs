#include<stdio.h>
int main()
{
    int Num, factorial = 1, i;
    printf("Enter any Number:");
    scanf("%d",&Num);
    for(i=1;i<=Num;i++)
    {
        factorial *= i;
        
    }
    printf("\nFactorial of the Number is = %d\n",factorial);
    
    return 0;
}