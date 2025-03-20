#include "stack.h"

// Constructor
void createStack(List *stack)
{
    (*stack).first = NULL;
}

address allocate(bool binary)
{
    address p;

    p = (address)malloc(sizeof(Node));
    if(p != NULL) 
    {
        p->hasilBagi = binary;
        p->next = NULL;
    }
    return p;
}

// Destructor
void deallocate(address p)
{
    if(p != NULL)
    {
        free(p);
    }
}

void pop(List *stack)
{
    address p;
    
    if(!stackEmpty(*stack))
    {
        p = (*stack).first;
        (*stack).first = p->next;
        deallocate(p);
    }
}

void deleteStack(List *stack)
{
    address pDel;

    pDel = (*stack).first;
    while (pDel != NULL)
    {
        (*stack).first = pDel->next;
        deallocate(pDel);
        pDel = (*stack).first;
    }
}

// Verification
bool stackEmpty(List stack)
{
    return (stack.first == NULL);
}

// Stack manipulation
void push(List *stack, address p)
{
    p->next = (*stack).first;
    (*stack).first = p;
}

void inverseStack(List *stack)
{
    address p, pNew;
    List temp;

    createStack(&temp);
    p = (*stack).first;
    while (p != NULL)
    {
        pNew = p;
        p = p->next;
        (*stack).first = p;
        pNew->next = NULL;
        push(&temp, pNew);
    } 
    (*stack).first = temp.first;
}

// Output
void printStack(List stack)
{
    address p;

    if (stack.first == NULL)
    {
        printf("Stack Kosong .... \a\n");
    }
    else 
    {
        p = stack.first;
        for (;;)
        {
            if (p == NULL)
            {
                printf("\n");
                break;
            }
            else 
            {
                printf("%d", p->hasilBagi);
                p = p->next;
            }
        }
    }
}
