#include "Product.h"
//Product Class Implementation
Product::Product()
{}
Product::~Product()
{}
void Product::setId(string value){
    id=value;}
void Product::setName(string value){
    name=value;}
void Product::setUnitys(int value){
    unitys=value;}
void Product::setCost(float value){
    cost=value;}
string Product::getId(){
    return id;}
string Product::getName(){
    return name;}
int Product::getUnitys(){
    return unitys;}
float Product::getCost(){
    return cost;}
