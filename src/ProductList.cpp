#include "ProductList.h"
ProductList::ProductList()
{
    first=NULL;
    last=NULL;
}
ProductList::~ProductList(){}
void ProductList::addLast(){
    ProductNode* newProduct=new ProductNode();
    if(!newProduct){
        first=newProduct;
        last=newProduct;
    }else{
        last->setNextNode(newProduct);
        newProduct->setPreviousNode(last);
        last=newProduct;
    }
}
void ProductList::capturingData(ProductNode* p){
    string data=""; int stock=0; float cost=0;
    cout<<"- Registering a new product -";
    cout<<"\n\n R";
    cout<<"ID   :"<<endl;
    getline(cin,data);
    p->setId(data);
    cout<<"Name :"<<endl;
    getline(cin,data);
    p->setName(data);
    cout<<"Cost :"<<endl;
    cin>>cost;
    p->setCost(cost);
    cout<<"Stock:"<<endl;
    cin>>stock;
    p->setStock(stock);
    cout<<"\n";
}
ProductNode* ProductList::searchProduct(string idProduct){
    ProductNode* temp=first;
    while(temp){
        if(temp->getId()==idProduct)
            break;
        temp=temp->getNextNode();
    }
    return temp;
}
void ProductList::printProducts(){
    ProductNode* temp=first;
    cout<<"\n -- Printing all products --\n"<<endl;
    while(first){
        temp->printProduct();
        temp=temp->getNextNode();
    }
}
void ProductList::resetList(){
    ProductNode* temp=first;
    while(temp){
        temp->deleteProduct();
        temp=temp->getNextNode();
    }
}
