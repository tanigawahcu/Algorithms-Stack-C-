#ifndef __LIBSTACK_H__
#define __LIBSTACK_H__

struct cell {
    int element;
    struct cell *next;
};

struct cell *push(struct cell *init, int x);
int top(struct cell *init);
struct cell *pop(struct cell *init);
void printstack(struct cell *init);

#endif