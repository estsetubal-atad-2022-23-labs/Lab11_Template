/**
 * @file main_chars.c
 * @author Bruno Silva
 * @brief Simple test for the ADT Priority Queue using characters.
 * The PQueueElem must be parameterized as 'char'.
 * 
 * @version 0.1
 * @date 2021-05-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#include "pqueue.h"

int main() {

    PtPQueue pqueue = pqueueCreate();

    /*  The letter 'a' should have the highest priority 
        Then, 'b' and so forth, according to the alphabet
        order.
    */
   
    pqueueEnqueue(pqueue, 'c');
    pqueueEnqueue(pqueue, 'b');
    pqueueEnqueue(pqueue, 'e');
    pqueueEnqueue(pqueue, 'd');    
    pqueueEnqueue(pqueue, 'a');

    pqueuePrint(pqueue);

    printf("Dequeuing all... \n");
    while(!pqueueIsEmpty(pqueue)) {
        char c;
        pqueueDequeue(pqueue, &c);
        printf("%c - %d \n", c, pqueueElemPriorityValue(c));
    }

    pqueueDestroy(&pqueue);

    return EXIT_SUCCESS;
}