#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.0;
    bool IsStudent = true; //10% discount
    bool IsSenior = true;   //20% discount

    if(IsStudent)
    {
        if(IsSenior)
        {
            printf("You get a seinor discount of 20%%\n");
            printf("You get a student discount of 10%%\n");
            price *= 0.7;
        }
        else
        {
            printf("You get a student discount of 10%%\n");
            price *= 0.9;
        }
    }
    else if(IsSenior)
    {
        printf("You get a seinor discount of 20%%\n");
        price *= 0.8;
    }


    printf("The price of a ticket is $%.2f\n", price);




    return 0;
}