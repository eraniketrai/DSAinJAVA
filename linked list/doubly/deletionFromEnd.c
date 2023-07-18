#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*temp;
void create()
{
    head=0;
    int choice=1;
    while (choice!=0)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if (head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want to continue?(0/1)\n");
        scanf("%d",%choice);
    }
}
void deleteFromEnd()
{
    struct node *temp1;
    temp1=temp;
    temp->prev->next=0;
    temp=temp->prev;
    free(temp1);
}
void display()
{
    temp=head;
    while (temp!=0)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL/n");
}
int main()
{
    create();
    printf("\nthe linked list before deletion\n");
    display();
    printf("\nthe linked list after deletion\n");
    deleteFromEnd();
    display();
    return 0;
}