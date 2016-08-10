#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define NULL 0
struct linked_list
{
    int number;
    struct linked_list *next;
};
typedef struct linked_list node; /*node type defined */
void main()
{
    node *head;
    void create(node *p);
    int count(node *p);
    void print(node *p);
    head = (node *)malloc(sizeof(node));
    create(head);
    printf("\n");
    print(head);
    printf("\n");
    printf("\n Number of items = %d \n",count(head));
    getch();
}
void create(node *list)
{
    printf("input a number \n");
    scanf("%d",&list->number);
    if(list->number==-999)
    {
        list->next = NULL;
    }
    else
    {
        list->next = (node *)malloc(sizeof(node));
        create(list->next);
    }
}
void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%d-->",list->number);
            printf("%d",list->next->number);
        print(list->next);
    }
}
int count(node *list)
{
    if(list->next==NULL)
        return (0);
    else
        return(1+count(list->next));
}
