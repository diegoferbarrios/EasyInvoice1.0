#ifndef CLIENTNODE_H
#define CLIENTNODE_H
#include <iostream>
using namespace std;
class ClientNode
{
    public:
        //Constructor
        ClientNode();
        virtual ~ClientNode();
        //Encapsulation, setters
        void setID(string value);
        void setName(string value);
        void setLastName(string value);
        void setDateOfBirth(string value);
        void setPhoneNumber(string value);
        void setEmail(string value);
        void setGender(string value);
        void setNextNode(ClientNode*);
        void setPreviousNode(ClientNode*);
        //Encapsulation, getters
        string getId();
        string getName();
        string getLastName();
        string getDateOfBirth();
        string getPhoneNumber();
        string getEmail();
        string getGender();
        ClientNode* getNextNode();
        ClientNode* getPreviousNode();
        //Methods
        void printClient();
        void deleteClient();
    protected:
    private:
        string id;
        string name;
        string lastName;
        string dateOfBirth;
        string phoneNumber;
        string email;
        string gender;
        ClientNode* nextNode;
        ClientNode* previousNode;
};
#endif // CLIENTNODE_H
