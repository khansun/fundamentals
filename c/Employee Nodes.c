#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Enter character string without space
struct node
{
    char name[20],rank[10];
    int age;
    int salary;
    struct node* next;
};
typedef struct node node;

node* createnode(node* head)
{

    node* newnode;
    newnode=( node*)malloc(sizeof (node));

    printf("\nEnter the employee name \n");
    scanf("%s",newnode->name);
    printf("\nEnter the age of the employee\n");
    scanf("%d",&newnode->age);
    printf("\nEnter the salary of the employee \n");
    scanf("%d",&newnode->salary);
    printf("\nEnter the employee's rank \n");
    scanf("%s",newnode->rank);

    if(newnode == NULL)
    {
        printf("\n Enter the new Employee \n");
        newnode->next=NULL;
    }

    else
    {
        newnode->next=head;

    }
    return newnode;
}

void display( node* head)
{
    if(head==NULL)
    {
        printf("\nEmployee not found!\n");
    }

    else
    {
        while(head!=NULL)
        {
            printf("\nThe name of the employee is %s\n",head->name);
            printf("\nThe age of the employee is %d\n",head->age);
            printf("\nThe salary of the employee is %d\n",head->salary);
            printf("\nThe rank of the employee is %s\n",head->rank);

            head=head->next;

        }
    }
}

node *swap(node* ptr1, node* ptr2)
{
    node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}

int bubbleSortAgeDesc(node** head, int total)
{
    node** header;
    int i, j, swapped;

    for (i = 0; i <= total; i++)
    {

        header = head;
        swapped = 0;

        for (j = 0; j < total - i - 1; j++)
        {

            node* p1 = *header;
            node* p2 = p1->next;

            if (p1->age < p2->age)
            {

                *header = swap(p1, p2);
                swapped = 1;
            }

            header = &(*header)->next;
        }
        if (swapped == 0)
            break;
    }
}
int bubbleSortSalaryAsc(node** head, int total)
{
    node** header;
    int i, j, swapped;

    for (i = 0; i <= total; i++)
    {

        header = head;
        swapped = 0;

        for (j = 0; j < total - i - 1; j++)
        {

            node* p1 = *header;
            node* p2 = p1->next;

            if (p1->salary > p2->salary)
            {

                *header = swap(p1, p2);
                swapped = 1;
            }

            header = &(*header)->next;
        }
        if (swapped == 0)
            break;
    }
}

int main()
{
    node* head;
    int i;
    char sw;
    head=NULL;


        printf("\nEnter the details of 5 employees: \n");
            i = 5;
            while(i>0)
            {
                head=createnode(head);
                i--;
            }

        while(head!=NULL)
    {
        printf("Press 'a' to display employee info sorted by age in descending order\nPress 'b' to display employee info sorted by salary in ascending order\n");
        scanf("%c",&sw);

        switch(sw)
        {

        case ('a'):

            bubbleSortAgeDesc(&head,5);
            display(head);
            break;
        case('b'):
            bubbleSortSalaryAsc(&head,5);
            display(head);
            break;

        }
    }
}
