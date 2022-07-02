#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct Node
    {
        int data;
        struct Node* link;
    };
    typedef struct node node;
    struct Node* top = NULL;
    void push(int x)
    {
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
        temp->data = x;
        temp->link = top;
        top = temp;
    }
    int pop()
    {
        struct Node* temp;
        if(top==NULL)
            return 0;
        temp = top;
        top = top->link;

        free(temp);
    }

    push(2);
    push(3);
    push(5);
    push(6);
    printf("%d", pop());
}
