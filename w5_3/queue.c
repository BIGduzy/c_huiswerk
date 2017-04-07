/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 5 opdracht 3
/* --------------------------- */

#include "queue.h"

void init_queue(Queue* pq) {
    pq->head = 0;
    pq->tail = 0;
}

void enqueue(Queue* pq, int data) {
    // queue overflow
    assert(pq->tail < QUEUESIZE - 1);
    pq->a[pq->tail++] = data;
}

int dequeue(Queue* pq) {
    assert(pq->head != pq->tail);
    return pq->a[pq->head++];
}

void show(Queue q) {
    if (q.head != q.tail) {
        int i = q.head;
        printf("%d", q.a[i++]);
        while (i < q.tail) {
            printf(" <- %d", q.a[i++]);
        }
        putchar('\n');
    } else {
        puts("Stack Empty");
    }
}