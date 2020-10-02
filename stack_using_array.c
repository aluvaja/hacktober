#include <stdio.h>
#include <stdlib.h>
//#include<math.h>
//#include<string.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct stack s;
    // s.size = 10;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size*sizeof(int));
    // struct stack *s;
    // (*s).size = 10;
    // (*s).top = -1;
    // (*s).arr = (int *)malloc((*s).size*sizeof(int));
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf("Hello world\n");
    // printf("Hello world");
    s->size = 10;
    printf("Hello world\n");
    s->top = -1;
    printf("Hello world\n");
    s->arr = (int *)malloc((s->size) * sizeof(int));
    printf("Hello world\n");
    if (isFull(s)==1)
    {
        printf("it's empty :(\n");
    }
    else
    {
        printf("not empty\n");
    }
    printf("Hello world\n");
    if(isEmpty(s)==1){
        printf("it's empty :(\n");
    }
    else
    {
        printf("not empty\n");
    }
    printf("Hello world\n");

    return 0;
}
