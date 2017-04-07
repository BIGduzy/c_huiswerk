/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 5 opdracht 3
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  19/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 5 exercise 3
 */

#include <stdio.h>
#include "queue.h"

/**
 * @brief Init queue, enqueue, dequeue and show queue
 */
int main(int argc, char **argv)
{
    Queue q;
    init_queue(&q);
    show(q);
    enqueue(&q, 60);
    enqueue(&q, 20);
    enqueue(&q, 1);
    enqueue(&q, 77);
    show(q);
    printf("%d\n", dequeue(&q));
    show(q);
    
    return 0;
}
