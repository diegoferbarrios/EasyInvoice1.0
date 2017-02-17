#include "Client.h"
Client::Client(){}
Client::~Client(){}
void Client::setID(string value){
    id=value;}
void Client::setName(string value){
    name=value; }
void Client::setLastName(string value){
    lastName=value; }
void Client::setDateOfBirth(string value){
    dateOfBirth=value; }
void Client::setPhoneNumber(string value){
    phoneNumber=value; }
string Client::getId(){
    return id;}
string Client::getName(){
    return name;}
string Client::getLastName(){
    return lastName;}
string Client::getDateOfBirth(){
    return dateOfBirth; }
string Client::getPhoneNumber(){
    return phoneNumber;}
