#include<stdio.h>


int main()
{
    int Total, Roll_No, Dob;
    int Maths, Computer_science, English, physics, chemistry, tamil;
    printf("Enter your Roll Number: ");
    scanf("%d", &Roll_No);
    printf("\nEnter your Date of Birth: ");
    scanf("%d", &Dob);
    

    if(Roll_No == 52 && Dob == 2004)
    {
        printf("\nEnter your Marks in Maths: ");
        scanf("%d", &Maths);
        printf("\nEnter your Marks in Computer Science: ");
        scanf("%d", &Computer_science);
        printf("\nEnter your Marks in English: ");
        scanf("%d", &English);
        printf("\nEnter your Marks in Physics: ");
        scanf("%d", &physics);
        printf("\nEnter your Marks in Chemistry: ");
        scanf("%d", &chemistry);
        printf("\nEnter your Marks in Tamil: ");
        scanf("%d", &tamil);
        Total = Maths + Computer_science + English + physics + chemistry + tamil;
    
        if(Maths >= 50 && Computer_science >= 50 && English >= 50 && physics >= 50 && chemistry >= 50 && tamil >= 50) 
        printf("\nYou have Passed the Exams with Distinction\nTotal Marks = %d",Total);
        else if(Maths >= 35 && Computer_science >= 35 && English >= 35 && physics >= 35 && chemistry >= 35 && tamil >= 35)
        printf("\nYou have Passed the Exams");
        else
        printf("\nYou have Failed the Exams");
    }
    else
    {
        printf("\nInvalid Roll Number or Date of Birth");
    }
    return 0;
}