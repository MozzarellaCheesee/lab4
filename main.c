#include "./include/stack.h"

int main() {
    clear();
    int size;
    printf("Enter stack size: ");
    scanf("%d", &size);
    Stack* stack = createStack(size);
    if (stack == NULL) return 1;
    clear();
    int choice;
    do {
        printf("Stack Management Application:\n");
        printf("1. Add new element (push)\n");
        printf("2. Find element in stack\n");
        printf("3. Print top element (peek)\n");
        printf("4. Delete top element (pop)\n");
        printf("5. Free the stack and exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        clear();
        switch (choice) {
            case 1:
                push(stack);
                break;
            case 2:
                isInStack(stack);
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                pop(stack);
                break;
            case 5:
                freeStack(stack);
                printf("Exit");
                return 1;
            default:
                printf("Invalid input!");
        }
    } while (choice != 5);
}