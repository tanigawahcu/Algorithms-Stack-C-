#include<stdio.h>
#include<stdlib.h>
#include"libstack.h"

struct cell *push(struct cell *init, int x) {
    struct cell *q, *r;

    r = (struct cell *)malloc(sizeof(struct cell));

    q = init;
    init = r;

    r->element = x;
    r->next = q;

    return init;
}

int top(struct cell *init) {
    return init->element;
}

struct cell *pop(struct cell *init) {
    struct cell *q;

    if( init != NULL ) {
        q = init;
        init = init->next;
        free(q);

        return init;
    } else {
        printf("Error: Stack is empty.\n");
        exit(1);
    }
}

void printstack(struct cell *init) {
    struct cell *cell;

    printf("\n------------ start to print stack infomation -------------\n");
    printf("the pointer value of init: %p\n\n", init);

    cell = init;
    while( cell != NULL ) {
        printf("the pointer value of cell: %p\n", cell);
        printf("the value of element: %d\n", cell->element);
        printf("the pointer value of next: %p\n", cell->next);
        printf("\n");
        cell = cell->next;
    }
    printf("------------- end of print stack infomation --------------\n\n");
}