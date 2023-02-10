#include "pqueueElem.h"
#include <stdio.h>

void pqueueElemPrint(PQueueElem elem) {
    printf("%c ", elem);
    //clientPrint(&elem);
}

int pqueueElemPriorityValue(PQueueElem elem) {
    return (128 - elem); // priority ordered by ascii alphabet
    //return elem.type; //priority ordered by type
}