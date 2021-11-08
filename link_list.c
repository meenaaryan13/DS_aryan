#include <stdio.h>
#include <stdlib.h>

void insert(int);
void bginsert(int);
void endinsert(int);
void indexinsert(int);
void centerinsert(int);
void bgdelete();
void enddelete();
void indexdelete();

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int choice, item;
    {
        printf("enter choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case1:
            printf("enter A element ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            printf("Enter Begning element ");
            scanf("%d", &item);
            bginsert(item);
            break;
        case3:
            printf("Enter ending element ");
            scanf("%d", &item);
            endinsert(item);
            break;
        case 4:
            printf("Enter index element ");
            scanf("%d", &item);
            indexinsert(item);
            break;
        case 5:
            printf("center insert element ");
            scanf("%d", &item);
            centerinsert(item);
            break;
        case 6:
            printf("Delete  Begning element ");
            bgdelete();
            break;
        case 7:
            printf("Delete  ending element ");

            enddelete();
            break;

        case 8:
            printf("Delete  index element ");

            bgdelete();
            break;
        default:
            printf("invalid choice ");
            break;
        }
    }
}
