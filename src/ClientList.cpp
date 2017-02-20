#include "ClientList.h"
ClientList::ClientList(){
    first=NULL;
    last=NULL;
}
ClientList::~ClientList(){}
void ClientList::CapturingData(ClientNode* newClient){
    string data="";
    cout<<"\n\n- Creating a new customer - \n"<<endl;
    cout<<"ID:"<<endl;
    getline(cin,data);
    getline(cin,data);
    newClient->setID(data);
    cout<<"\nName:"<<endl;
    getline(cin,data);
    newClient->setName(data);
    cout<<"\nLast Name:"<<endl;
    getline(cin,data);
    newClient->setLastName(data);
    cout<<"\nEmail:"<<endl;
    getline(cin,data);
    newClient->setEmail(data);
    cout<<"\nGender:            Type 'M' or 'F' "<<endl;
    getline(cin,data);
    newClient->setGender(data);
    cout<<"\nBirth of Date:     Format 'dd/mm/yyyy'"<<endl;
    getline(cin,data);
    newClient->setDateOfBirth(data);
    cout<<"\nPhone Number:"<<endl;
    getline(cin,data);
    newClient->setPhoneNumber(data);
    cout<<"\n";
}
void ClientList::addLast(){
     ClientNode* newClient = new ClientNode();
     CapturingData(newClient);
    if(!first){
        first=newClient;
        last=newClient;
    }else{
        newClient->setPreviousNode(last);
        last->setNextNode(newClient);
        last=newClient;
    }
    cout<<"\n The customer has been registered \n";
}
void ClientList::addFirst(){
    ClientNode* newClient = new ClientNode();
    CapturingData(newClient);
    if(!first) first=newClient;
    else{
        first->setPreviousNode(newClient);
        newClient->setNextNode(first);
        first=newClient;
    }
    cout<<"\n The customer has been registered \n";
}
ClientNode* ClientList::searchClient(string idClient){
    ClientNode* temp=first;
    while(temp){
        if(temp->getId()==idClient)
            break;
        temp=temp->getNextNode();
    }
    return temp;
}
void ClientList::printClients(){
    ClientNode* temp=first;
    cout<<"\n - Print all clients - \n"<<endl;
    while(temp){
        temp->printClient();
        temp=temp->getNextNode();
    }
}
