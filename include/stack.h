#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

typedef struct {
    int data;
    struct Node* next;
} Node;

typedef struct {
    int max_size;
    int size;
    Node* top;
} Stack;

Stack* createStack(int);

int isFull(Stack*);

int isEmpty(Stack*);

void peek(Stack*);

void push(Stack*);

void pop(Stack*);

void freeStack(Stack*);

