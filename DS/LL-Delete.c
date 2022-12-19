// Delete From a Linked List

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct list
{
    int info;
    struct list *link;
}node;

node *start, *avail = 0, *mew, *loc, *locp;

void create(node *ptr, int n)
{
    if(n == 1)
    {
        scanf("%d", &ptr->info);
        ptr->link = 0;
    }

    else
    {
        scanf("%d", &ptr->info);
        ptr->link = (node *)malloc(sizeof(node));
        create(ptr->link, n - 1);
    }
    
}

void traverse(node *start)
{
    node *ptr;
    ptr = start;

    while(ptr != 0)
    {
        printf("-->[%d %d]", ptr->info, ptr->link);
        ptr = ptr->link;
    }
}

deletNode(node *loc, node *locp)
{
    if(start == 0)
    {
        printf("UNDERFLOW\n");
        exit(0);
    }

    if(locp == 0)
        start = start->link;

    else
        locp->link = loc->link;

    loc->link = avail;
    avail = loc;
    loc->info = 0;
}

int main()
{
    int n, item;

    printf("Number of Node: ");
    scanf("%d", &n);

    start = (node *)malloc(sizeof(node));

    printf("Enter Info: ");
    create(start, n);

    while(1)
    {
        printf("\n\nSTART[%d]", start);
        traverse(start);

        printf("\n\nAVAIL[%d]", avail);
        traverse(avail);

        printf("\n\nDelete (y/n): ");

        if(getch() == 'n')
            exit(0);

        printf("\nInsert The LOC: ");
        scanf("%d", &loc);

        printf("Insert The LOCP: ");
        scanf("%d", &locp);

        deletNode(loc, locp);
    }

    return 0;
}

