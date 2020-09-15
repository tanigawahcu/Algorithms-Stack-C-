#include<stdio.h>
#include<libstack.h>

/* xの値を表示する関数 */
void print_x(int x) {
    printf("the valule of x: %d\n");
}

void main() {
    struct cell * init=NULL;
    int x;

    /* stackの状態を表示 */
    printstack(init);

    /* stackに2をpushして，更新後のstackへのポインタを受け取る */
    printf("push(init, 2)\n");
    init = push(init, 2);
    printstack(init); // stackの状態を表示

    /* stackに4をpushして，更新後のstackへのポインタを受け取る */
    printf("push(init, 4)\n");
    init = push(init, 4);
    printstack(init); // stackの状態を表示

    /* stackに1をpushして，更新後のstackへのポインタを受け取る */
    printf("push(init, 1)\n");
    init = push(init, 1);
    printstack(init); // stackの状態を表示

    /* stackからpopして，popされた値を表示する */
    printf("pop(init)\n");
    x = top(init);
    print_x(x);
    init = pop(init);
    printstack(init);

    /* stackからpopして，popされた値を表示する */
    printf("pop(init)\n");
    x = top(init);
    print_x(x);
    init = pop(init);
    printstack(init);

    /* stackからpopして，popされた値を表示する */
    printf("pop(init)\n");
    x = top(init);
    print_x(x);
    init = pop(init);
    printstack(init);

    /* 終了 */
    return;
}