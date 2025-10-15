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
        printf("1. Add new element\n");
        printf("2. Print top element\n");
        printf("3. Delete top element\n");
        printf("4. Free the stack and exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        clear();
        switch (choice) {
            case 1:
                push(stack);
                break;
            case 2:
                peek(stack);
                break;
            case 3:
                pop(stack);
                break;
            case 4:
                freeStack(stack);
                printf("Exit");
                return 1;
            default:
                printf("Invalid input!");
        }
    } while (choice != 4);
}