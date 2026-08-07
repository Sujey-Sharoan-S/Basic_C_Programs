#include <stdio.h>
int main()
{
    int a;
    for(a=1;a<=100;++a)
    {
        if ((a%2==0) &&(a%5==0))
        {
            continue;
        }printf("%d\n",a);
    }
    return 0;
}