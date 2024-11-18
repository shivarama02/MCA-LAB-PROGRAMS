#include <stdio.h>

#define MAX 5  // Maximum size of the stack

// Stack structure
struct Stack {
    int data[MAX];
    int top;
};

// Function declarations
void push(struct Stack *s, int value);
int pop(struct Stack *s);
int peek(struct Stack *s);
int isEmpty(struct Stack *s);
int isFull(struct Stack *s);

int main() {
    struct Stack stack;
    stack.top = -1;  // Initialize stack

    int choice, value;

    // Menu-driven program
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek (Top Element)\n");
        printf("4. Check if Stack is Empty\n");
        printf("5. Check if Stack is Full\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (!isFull(&stack)) {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    push(&stack, value);
                } else {
                    printf("Stack is full! Cannot push more elements.\n");
                }
                break;
            case 2:
                if (!isEmpty(&stack)) {
                    value = pop(&stack);
                    printf("Popped value: %d\n", value);
                } else {
                    printf("Stack is empty! Nothing to pop.\n");
                }
                break;
            case 3:
                if (!isEmpty(&stack)) {
                    value = peek(&stack);
                    printf("Top value: %d\n", value);
                } else {
                    printf("Stack is empty! No top element.\n");
                }
                break;
            case 4:
                if (isEmpty(&stack)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 5:
                if (isFull(&stack)) {
                    printf("Stack is full.\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;
            case 6:
                return 0;  // Exit program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to push an element onto the stack
void push(struct Stack *s, int value) {
    s->data[++(s->top)] = value;
    printf("Pushed %d onto the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack *s) {
    return s->data[(s->top)--];
}

// Function to peek at the top element of the stack
int peek(struct Stack *s) {
    return s->data[s->top];
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}
 