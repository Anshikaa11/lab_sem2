#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void insert(int value)
{
    if((front == 0 && rear == MAX-1) || (front == rear + 1))
    {
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1)   // first element
    {
        front = 0;
        rear = 0;
    }
    else if(rear == MAX-1)
    {
        rear = 0;    }
    else
    {
        rear++;
    }
    queue[rear] = value;
    printf("Inserted: %d\n", value);
}
void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    if(front <= rear)
    {
        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for(i = front; i < MAX; i++)
            printf("%d ", queue[i]);
        for(i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    display();
    return 0;
}