#include<bits/stdc++.h>
#define STACK_MAX 10
using namespace std;

typedef struct{
    int top;
    int data[STACK_MAX];
}Stack;

void push(Stack *s, int item)
{
    if(s->top < STACK_MAX){
        s->data[s->top]=item;
        s->top=s->top + 1;
    }
    else{
        cout<<"Stack is full";
    }
}
int pop(Stack *s)
{
    int item;
    if(s->top == 0){
        cout<<"Stack is empty";
        return -1;
    }
    else{
        s->top = s->top -1;
        item =s->data[s->top];
    }
    return item;
}


int main()
{
    Stack my_stack;
    int item;
    my_stack.top = 0;

    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);

    item=pop(&my_stack);
    printf("%d\n", item);

    item=pop(&my_stack);
    printf("%d\n", item);

    item=pop(&my_stack);
    printf("%d\n", item);
}
