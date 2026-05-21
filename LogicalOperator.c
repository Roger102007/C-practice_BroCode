#include <stdio.h>
#include <stdbool.h>
//logical operators = used to combine or modify boolen expressions
//&& = AND
//|| = OR
// ! = NOT
// ^ = XOR
int main()
{
    int temp = -15;

    if(temp > 0 && temp < 30)
    {
        printf("The temperature is good\n");
    }
    else
    {
        printf("The temperature is bad\n");
    }
    
    if(temp < 0 || temp > 30)
    {
        printf("The temperature is bad\n");
    }
    else
    {
        printf("The temperature is good\n");
    }
    
    bool IsSunny = true;

    if(IsSunny)
    {
        printf("It is sunny\n");
    }

    if(IsSunny != 1)
    {
        printf("Is is rainy\n");
    }


    
    
    
    
    
    
    
    return 0;
}