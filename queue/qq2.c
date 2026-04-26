#include <stdio.h>
#define MAX 5
int queue[MAX] = {10, 20, 30};
int front = 0, rear = 2;
void delete_element() {
    if (front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);
    front++;
}
int main() {
    delete_element();
    printf("Remaining elements:\n");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    return 0;
}