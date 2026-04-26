#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void insert() {
    int num;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    printf("Enter element: ");
    scanf("%d", &num);
    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = num;
}
int main() {
    insert();
    insert();
    insert();
    printf("Queue elements:\n");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    return 0;
}