#include<stdio.h>
int main()
{
    int tables, Num,i;
    printf("Enter any Number:");
    scanf("%d",&Num);
    for(i = 1;i<=10;i++)
    {
        tables = Num * i;
        printf("%d * %d = %d\n",Num,i,tables);
    }
}