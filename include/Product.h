#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

using namespace std;
class Product
{
    public:
        Product();
        virtual ~Product();

        //Encapsulation, getters and setters
        void setId(string value);
        void setName(string value);
        void setCost(float value);

        string getId();
        string getName();
        float getCost();

    protected:
    private:
          //Product Class Attributes
        string id;
        string name;
        float cost;
};

#endif // PRODUCT_H
