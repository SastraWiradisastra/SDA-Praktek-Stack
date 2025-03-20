#include "stack.h"
#include "binaryConvert.h"

int userIn()
{
    int input;
    printf("Masukkan input berbentuk int: ");
    scanf("%d", &input);
    return input;
}

void decToBinary(List *stack, int input)
{
    address p;
    bool remainder;
    
    if(input == 0)
    {
        p = allocate(0);
        push(stack, p);
        return;
    }
    
    while(input > 0)
    {
        remainder = input % 2;  
        p = allocate(remainder);
        push(stack, p);
        input = input / 2;
    }
    
    inverseStack(stack);
}
