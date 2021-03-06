#include <iostream>
#include <stdlib.h>
#include <ClientNode.h>
#include <ClientList.h>
using namespace std;

void greeting();
void showMenu();
int  selectOperation();

void newCustomerData();

int main()
{
    ClientList* myClients=new ClientList();
    int sm=0;
    do{
        sm=selectOperation();
        switch(sm){
            case 1:
                    myClients->addFirst();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 9:
                myClients->printClients();
                break;
            default:
                break;
            }
    }while(sm!=0);
    cout<<"You have chosen to leave the program..."<<endl;
    cout<<"Execution completed..."<<endl;

    cout<<"";
    return 0;
}

void greeting(){
    cout<<endl;
    cout<<"----------------------- EASY INVOICE -----------------------"<<endl;
    cout<<"************************************************************"<<endl;
    cout<<"************************************************************"<<endl;
    cout<<"************************************************************"<<endl;
    cout<<" - Welcome to EasyInvoice. This program is built in C++ -"<<endl;
    cout<<" - Version 1.0                                          -"<<endl;
    cout<<" - Developed by @dfbarrios, GitHub:                     -"<<endl;
    cout<<"\n"<<endl;
}

void showMenu(){
    cout<<"\n Select an option:\n\n"<<
    "1 = Register new customers  \n"<<
    "2 = Register new products   \n"<<
    "3 = Add Product Existence   \n"<<
    "4 = Register a new purchase \n"<<
    "9 = Print All Clients \n"<<
    "0 = Exit \n\n";}

int selectOperation(){
    int selectedOperation=0;
    do{
        showMenu();
        cin>>selectedOperation;
        if(selectedOperation<0||selectedOperation>9){
            cout<<"\n You have selected an invalid option"<<
            "...Try again \n";
            system("pause");
            system("cls");
        }
    }while((selectedOperation<0));
    return selectedOperation;
}

void newCustomerData(){

}
