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
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
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
        scanf("%d",&choice);
    }
}
void deleteFromBegining()
{
    struct node *temp1;
    temp1=head;
    head=temp1->next;
    head->prev=0;
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
    printf("NULL");
}
int main()
{
    create();
    printf("\n list before deletion\n");
    display();
    printf("\n list after deletion\n");
    deleteFromBegining();
    display();
    return 0;
}   