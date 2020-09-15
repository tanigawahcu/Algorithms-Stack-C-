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