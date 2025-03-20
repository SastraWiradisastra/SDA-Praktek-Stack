#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Data Type Declaration
typedef struct Node *address;

typedef struct Node {
    bool hasilBagi;
    address next;
} Node;

typedef struct {
    address first;
} List;

// Constructor
void createStack(List *stack);
address allocate(bool binary);

// Destructor
void deallocate(address p);
void pop(List *stack);
void deleteStack(List *stack);

// Verification
bool stackEmpty(List stack);

// Stack manipulation
void push(List *stack, address p);
void inverseStack(List *stack);

// Output
void printStack(List stack);

#endif
