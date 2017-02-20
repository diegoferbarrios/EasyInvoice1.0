#include "ClientNode.h"
ClientNode::ClientNode(){
    setID("");
    setName("");
    setLastName("");
    setDateOfBirth("");
    setPhoneNumber("");
    setEmail("");
    setGender("");
    setNextNode(NULL);
    setPreviousNode(NULL);
}
ClientNode::~ClientNode(){}
void ClientNode::setID(string value){
    id=value;}
void ClientNode::setName(string value){
    name=value; }
void ClientNode::setLastName(string value){
    lastName=value; }
void ClientNode::setDateOfBirth(string value){
    dateOfBirth=value; }
void ClientNode::setPhoneNumber(string value){
    phoneNumber=value; }
void ClientNode::setEmail(string value){
    email=value;}
void ClientNode::setGender(string value){
    gender=value;}
string ClientNode::getId(){
    return id;}
string ClientNode::getName(){
    return name;}
string ClientNode::getLastName(){
    return lastName;}
string ClientNode::getDateOfBirth(){
    return dateOfBirth; }
string ClientNode::getPhoneNumber(){
    return phoneNumber;}
string ClientNode::getEmail(){
    return email;}
string ClientNode::getGender(){
    return gender;
}
void ClientNode::setNextNode(ClientNode* n){
    nextNode=n;}
void ClientNode::setPreviousNode(ClientNode* p){
    previousNode=p;}
ClientNode* ClientNode::getNextNode(){
    return nextNode;
    }
ClientNode* ClientNode::getPreviousNode(){
    return previousNode;
}
void ClientNode::printClient(){
    cout<<"\n"<<endl
        <<"Client ID    : "<<getId()<<endl
        <<"Name         : "<<getName()<<endl
        <<"Last Name    : "<<getLastName()<<endl
        <<"Email        : "<<getEmail()<<endl
        <<"Phone Number : "<<getPhoneNumber()<<endl
        <<"Date of Birth: "<<getDateOfBirth()<<endl
        <<"Gender       : "<<getGender()<<endl
        <<"Next         : "<<this<<endl
        <<"Previous     : "<<this<<"\n"<<endl;
}
void ClientNode::deleteClient(){
    if(getNextNode()){
        getNextNode()->deleteClient();
        delete this;
    }
}
