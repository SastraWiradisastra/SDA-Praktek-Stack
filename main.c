#include "stack.h"
#include "binaryConvert.h"

int main()
{
    List binaryStack;
    int input;

    createStack(&binaryStack);
    
    input = userIn();
    
    decToBinary(&binaryStack, input);
    
    printf("Konversi biner: ");
    printStack(binaryStack);
    
    deleteStack(&binaryStack);
    
    return 0;
}
