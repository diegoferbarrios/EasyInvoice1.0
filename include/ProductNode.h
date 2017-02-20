#ifndef PRODUCTNODE_H
#define PRODUCTNODE_H
#include <iostream>
using namespace std;
class ProductNode
{
    public:
        ProductNode();
        virtual ~ProductNode();
        void setId(string value);
        void setName(string value);
        void setCost(float value);
        void setStock(int value);

        string getId();
        string getName();
        float getCost();
        int getStock();

        void setNextNode(ProductNode*);
        void setPreviousNode(ProductNode*);
        ProductNode* getNextNode();
        ProductNode* getPreviousNode();

        void printProduct();
        void deleteProduct();
    protected:
    private:
          //ProductNode Class Attributes
        string id;
        string name;
        float cost;
        int stock;

        ProductNode* nextNode;
        ProductNode* previousNode;
    };
#endif // PRODUCTNODE_H
