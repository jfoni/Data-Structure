#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

// Enqueue function
void enqueue() {
    int x;
    printf("Please enter an element to enqueue: ");
    scanf("%d", &x);

    if ((rear + 1) % MAX == front) {  // Check if queue is full
        printf("Overflow\n");
    } else {
        if (front == -1) {  // If the queue is empty
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = x;
        printf("%d enqueued into queue at index %d\n", x, rear);
    }
}

// Dequeue function
void dequeue() {
    if (front == -1) {  // Check if queue is empty
        printf("Underflow\n");
    } else {
        printf("%d dequeued from queue at index %d\n", queue[front], front);
        if (front == rear) { // Reset queue if only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

// Peek function
void peek() {
    if (front == -1) {  // Check if queue is empty
        printf("Queue is empty!\n");
    } else {
        printf("Front element: %d at index %d\n", queue[front], front);
    }
}

// Is Empty function
int isEmpty() {
    return front == -1;
}

// Is Full function
int isFull() {
    return (rear + 1) % MAX == front;
}

int main() {
    printf("Enqueue operations:\n");
    enqueue();
    enqueue();
    
    printf("\nPeek operation:\n");
    peek();
    
    printf("\nDequeue operation:\n");
    dequeue();
    
    printf("\nPeek operation after dequeue:\n");
    peek();
    
    // Check if queue is empty
    if (rear < front) {
        printf("\nThe queue is empty now.\n");
    } else {
        printf("\nThe queue is NOT empty.\n");
    }

    // Check if queue is full
    if (rear > front) {
        printf("The queue is full.\n");
    } else {
        printf("The queue is NOT full.\n");
    }

    return 0;
}
