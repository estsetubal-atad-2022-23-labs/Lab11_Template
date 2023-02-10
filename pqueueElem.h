#pragma once

#include "client.h"

/** Type definition. Change according to the use-case. */
typedef char PQueueElem;
//typedef Client PQueueElem;

/**
 * @brief Prints an element.
 * 
 * Must be implemented according to concrete
 * type of PQueueElem.
 * 
 * @param elem [in] element to print
 */
void pqueueElemPrint(PQueueElem elem);

/**
 * @brief Returns the priority of an element
 * 
 * @param elem [in] the element
 * @return a numerical value that indicates the priority of the element
 */
int pqueueElemPriorityValue(PQueueElem elem);