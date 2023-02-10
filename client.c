#include "client.h"
#include <stdio.h>
#include <string.h>

Client clientCreate(char *name, enum ClientType type) {
    Client c;
    strcpy(c.name, name);
    c.type = type;
    return c;
}

void clientPrint(Client *pClient) {
    printf("%s (%s)\n", pClient->name, (pClient->type == Adult) ? "Adult" : "Elderly");
}