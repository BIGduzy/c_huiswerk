/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 5 opdracht 3
/* --------------------------- */

#include <Assert.h>


#ifndef QUEUE_H
#define QUEUE_H
#define QUEUESIZE 100
typedef struct {
    int a[QUEUESIZE];
    int head;
    int tail;
} Queue;

/**
 * @brief Initialize queue
 * @param pq Queue pointer
 */
void init_queue(Queue* pq);

/**
 * @brief Add to queue
 * @param pq Queue pointer
 * @param data int to add
 */
void enqueue(Queue* pq, int data);

/**
 * @brief Remove from queue
 * 
 *  Remove first enqued element
 * 
 * @param pq Queue pointer
 * @return removed element
 */
int dequeue(Queue* pq);

/**
 * @brief print queue to console
 * @param q Queue
 */
void show(Queue q);

#endif