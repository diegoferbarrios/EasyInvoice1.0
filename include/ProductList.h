#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H
#include <iostream>
#include <ProductNode.h>
using namespace std;
class ProductList
{
    public:
        ProductList();
        virtual ~ProductList();
        void addLast();
        ProductNode* searchProduct(string idProduct);
        void printProducts();
        void deleteProduct(string idProduct);
        void resetList();
        void capturingData(ProductNode* p);
    protected:
    private:
        ProductNode *first;
        ProductNode *last;
};

#endif // PRODUCTLIST_H
