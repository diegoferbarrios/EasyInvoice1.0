#include "ProductNode.h"
ProductNode::ProductNode()
{
    setNextNode(NULL);
    setPreviousNode(NULL);
    setName("");
    setCost(0);
    setId("");
    setStock(0);
}
ProductNode::~ProductNode(){}
void ProductNode::setId(string value){
    id=value;}
void ProductNode::setName(string value){
    name=value;}
void ProductNode::setCost(float value){
    cost=value;}
void ProductNode::setStock(int value){
    stock=value;}
void ProductNode::setNextNode(ProductNode* n){
    nextNode=n;}
void ProductNode::setPreviousNode(ProductNode *p){
    previousNode=p;}
string ProductNode::getId(){
    return id;}
string ProductNode::getName(){
    return name;}
float ProductNode::getCost(){
    return cost;}
int ProductNode::getStock(){
    return stock;}
ProductNode* ProductNode::getNextNode(){
    return nextNode;}
ProductNode* ProductNode::getPreviousNode(){
    return previousNode;}
void ProductNode::printProduct(){
    cout<<"\nID   : "<<getId()<<endl
        <<"Name   : "<<getName()<<endl
        <<"Cost   : "<<getCost()<<endl
        <<"Stock  : "<<getStock()<<endl
        <<"Address:"<<this<<"\n"<<endl;
}
void ProductNode::deleteProduct(){
    while(getNextNode()){
        getNextNode()->deleteProduct();
        delete this;
    }
}
