#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include <iostream>
#include <ClientNode.h>
class ClientList
{
    public:
        ClientList();
        virtual ~ClientList();
        void addFirst();
        void addLast();
        void printClients();
        void orderClients();
        void deleteClient();
        void deletAllClient();
        void CapturingData(ClientNode* newClient);
        ClientNode* searchClient(string idClient);
    protected:
    private:
         ClientNode *first;
         ClientNode *last;
};

#endif // CLIENTLIST_H
