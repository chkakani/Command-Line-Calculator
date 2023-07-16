//** Header Files **// 
#include "CommandLineCalculator.h"
#include "CommandLineCalculator.c"

//** Librariies **// 
#include <stdlib.h>
#include <stdio.h>

//** Main Program **//
int main(){
    float num1,num2,result;
    char operation; 

    printf("Enter an operation: +, - , / , *: \n");
    scanf("%c", &operation); 
    printf("Enter your first number: ");
    scanf("%f", &num1); 
    printf("Enter your first number: ");
    scanf("%f", &num2); 

    switch(operation){
        case('+'):
            result=add(num1,num2); 
            break;
        case('-'):
            result=subtract(num1,num2); 
            break;
        case('/'):
            result=divide(num1,num2); 
            break;
        case('*'): 
            result=multiply(num1,num2); 
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("Result: %.f\n",result);
    
    return 0;
    // end 
}
