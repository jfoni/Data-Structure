#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// ===========================
// Push function
void push() {
    int x;
    printf("Please Enter element: ");
    scanf("%d", &x);

    if (top == MAX -1) {  // Check if stack is full
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x;
        printf("%d pushed into stack at index %d\n", x, top);
    }
}

// ===========================
// Pop function
void pop() {
    if (top == -1) {  // Check if stack is empty
        printf("Underflow\n");
    } else {
        printf("%d popped from stack at index %d\n", stack[top], top);
        top--;
    }
}

// ===========================
// Peek function
void peek() {
    if (top == -1) {  // Check if stack is empty
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d at index %d\n", stack[top], top);
    }
}


int isEmpty() {
    return top == -1;
}


int isFull() {
    return top == MAX - 1;
}

int main() {
    push();
    push();
    peek();
    pop();
    peek();

    // Check if stack is empty
    if (top == -1) {
        printf("The stack is empty now.\n");
    } else {
        printf("The stack is NOT empty.\n");
    }

    // Check if stack is full
    if (top == MAX-1) {
        printf("The stack is full.\n");
    } else {
        printf("The stack is NOT full.\n");
    }

    return 0;
}
