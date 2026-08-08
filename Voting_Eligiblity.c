#include<stdio.h>

int main()
{
    int Age ;
    char Name[50];
    
    printf("Enter Your Name : ");
    scanf("%s", Name);
    
    printf("Enter Your Age : ");
    scanf("%d",&Age);
    
    if(Age>=18)
        printf("You're Eligible to Vote");
    else
        printf("You're Not Eligible to Vote"); 
    return 0;
}
