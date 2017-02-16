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
        void setUnitys(int value);
        void setCost(float value);

        string getId();
        string getName();
        int getUnitys();
        float getCost();

    protected:
    private:
          //Product Class Attributes
        string id;
        string name;
        int unitys;
        float cost;
};

#endif // PRODUCT_H
