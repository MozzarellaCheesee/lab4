#include "../include/stack.h"

Stack* createStack(int size) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack == NULL) { printf("Error allocating memory for CachedData\n"); return NULL; }
    stack->max_size = size;
    stack->size = 0;
    stack->top = NULL;
    return stack;
}

int isFull(Stack* stack) {
    return stack->size >= stack->max_size;
}

int isEmpty(Stack *stack) {
    return stack->top == NULL;
}

void peek(Stack* stack){
    if (isEmpty(stack)) { printf("Stack is empty\n\n"); return; }
    clear();
    printf("\t\t%d\n\n", stack->top->data);
}

void push(Stack* stack) {
    if (isFull(stack)) { printf("Overflow error! Stack is full\n\n"); return;}
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (newNode == NULL) { printf("Error allocating memory for CachedData\n\n"); return; }
    int data;
    printf("Enter number: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = stack->top;
    stack->size++;
    stack->top = newNode;
    clear();
    printf("New element added\n\n");
}

void pop(Stack* stack) {
    if (isEmpty(stack)) { printf("Underflow error! Stack is empty\n\n"); return; }
    peek(stack);
    Node* temp = stack->top;
    stack->size--;
    stack->top = temp->next;
    free(temp);
}

void freeStack(Stack* stack) {
    while (!isEmpty(stack)) { pop(stack); }
    free(stack);
    clear();
}

void isInStack(Stack* stack) {
    int value;
    printf("Enter number for find: ");
    scanf("%d", &value);
    Node* current = stack->top;
    clear();
    for (int i = 0; i < stack->size; i++) {
        if (current->data == value) {
            printf("Element %d is found on the stack and is at index %d\n\n", value, i);
            return;
        }
        current = current->next;
    }
    printf("The element is not on the stack.\n\n");
};


