#pragma once

enum ClientType {Adult = 0, Elderly = 1};

typedef struct client {
    char name[100];
    enum ClientType type;
} Client;

Client clientCreate(char *name, enum ClientType type);
void clientPrint(Client *pClient);