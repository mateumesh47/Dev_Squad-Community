#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->link=second;

    second->data=2;
    second->link=third;

    third->data=3;
    third->link=NULL;

    while(head->link!=NULL || head->link==NULL)
    {
        printf("Element: %d\n",head->data);
        head=head->link;
    }
}