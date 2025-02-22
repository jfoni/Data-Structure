#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;


// Enqueue function
void enqueue() {
    int x;
    printf("Please enter an element to enqueue: ");
    scanf("%d", &x);

    if (rear == MAX - 1) {  // Check if queue is full
        printf("Overflow\n");
    } else {
        if (front == -1) {  // If the queue is empty
            front = 0;
        }
        rear++;
        queue[rear] = x;
        printf("%d enqueued into queue at index %d\n", x, rear);
    }
}


// Dequeue function
void dequeue() {
    if (front == -1 || front > rear) {  // Check if queue is empty
        printf("Underflow\n");
    } else {
        printf("%d dequeued from queue at index %d\n", queue[front], front);
        front++;
    }
}


// Peek function
void peek() {
    if (front == -1 || front > rear) {  // Check if queue is empty
        printf("Queue is empty!\n");
    } else {
        printf("Front element: %d at index %d\n", queue[front], front);
    }
}


// Is Empty function
int isEmpty() {
    return front == -1 || front > rear;
}


// Is Full function
int isFull() {
    return rear == MAX - 1;
}

int main() {
    enqueue();
    enqueue();
    peek();
    dequeue();
    peek();

    // Check if queue is empty
    if (rear<front) {
        printf("The queue is empty now.\n");
    } else {
        printf("The queue is NOT empty.\n");
    }

    // Check if queue is full
    if (rear>front) {
        printf("The queue is full.\n");
    } else {
        printf("The queue is NOT full.\n");
    }

    return 0;
}
