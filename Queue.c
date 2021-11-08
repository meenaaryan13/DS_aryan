#include <stdio.h>
#include <stdlib.h>
#define size 100
void enque(int);
void deque();
int display();
int front = -1;
int rear = -1;
int queue[size];

void enque(int v)
{
    if (rear == (size - 1))
    {
        printf(" Queue is full \n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
            queue[rear] = v;
        }
        else
        {
            queue[++rear] = v;
        }
    }
}

void deque()
{
    if (front == -1)
    {
        printf(" queue is empty \n");
    }
    else
    {
        printf(" popped %d\n", queue[front++]);
    }
}

int display()
{
    int i;
    if (rear == -1)
    {
        printf(" Queue is empty\n"); 
    }
    else
    {
        for(i = front; i<=rear;i++)
        {
            printf("Display %d\n",queue[i]);
        }
    }
}

int main()
{
    int choice, item;
    while (1)
    {

        {
            printf(" Enter choice \n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf(" Enter Element\n ");
                scanf("%d", &item);
                enque(item);
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                break;

                case 4:exit(0);
                break;
            default:
                printf(" Invlaid choice ");
                break;
            }
        }
    }
}
