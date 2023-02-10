/**
 * @file main_clients.c
 * @author Bruno Silva
 * @brief Simple test for the ADT Priority Queue using clients.
 * The PQueueElem must be parameterized as 'Client'.
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
#include "client.h"

int main() {

    PtPQueue pqueue = pqueueCreate();

    /*  The elderlies should have higher priority.
        Whithin elderlies or adults, they must be
        attended (removed) by queue order.

        Don't forget to parameterize pqueueElem for
        this example.
    */

    Client joe = clientCreate("Joe", Adult);
    Client sam = clientCreate("Sam", Elderly);
    Client sophia = clientCreate("Sophia", Adult);
    Client john = clientCreate("John", Adult);
    Client eva = clientCreate("Eva", Elderly);

    pqueueEnqueue(pqueue, joe);
    pqueueEnqueue(pqueue, sam);
    pqueueEnqueue(pqueue, sophia);
    pqueueEnqueue(pqueue, john);    
    pqueueEnqueue(pqueue, eva);

    pqueuePrint(pqueue);

    printf("Dequeuing all... \n");
    while(!pqueueIsEmpty(pqueue)) {
        Client c;
        pqueueDequeue(pqueue, &c);
        printf("Attending in front of line client named: ");
        pqueueElemPrint(c);
    }

    pqueueDestroy(&pqueue);

    return EXIT_SUCCESS;
}