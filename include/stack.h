#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

typedef struct Node Node;
typedef struct Stack Stack;

struct Node {
    int data;
    Node* next;
};

struct Stack {
    int max_size;
    int size;
    Node* top;
};

Stack* createStack(int);

int isFull(Stack*);

int isEmpty(Stack*);

void peek(Stack*);

void push(Stack*);

void pop(Stack*);

void freeStack(Stack*);

void isInStack(Stack*);

