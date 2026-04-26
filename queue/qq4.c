#include <stdio.h>
#define MAX 5
int queue[MAX] = {10, 20, 30};
int front = 0, rear = 2;
void delete_element() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}
int main() {
    delete_element();
    printf("Remaining elements:\n");
    if (front != -1) {
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
    }
    return 0;
}