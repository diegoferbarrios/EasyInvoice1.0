#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
using namespace std;
class Client
{
    public:
        Client();
        virtual ~Client();
        void setID(string value);
        void setName(string value);
        void setLastName(string value);
        void setDateOfBirth(string value);
        void setPhoneNumber(string value);

        string getId();
        string getName();
        string getLastName();
        string getDateOfBirth();
        string getPhoneNumber();
    protected:
    private:
        string id;
        string name;
        string lastName;
        string address;
        string dateOfBirth;
        string phoneNumber;
        string email;
};

#endif // CLIENT_H
