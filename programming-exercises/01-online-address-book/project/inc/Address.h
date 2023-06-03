#include <cstring>
#include <iostream>

using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
    private:
        int zip;
        std::string city; 
        std::string state;
        std::string streetAddress;

    public:
        Address();

        void setStreetAddress(std::string);
        std::string getStreetAddress();

        void setCity(std::string);
        std::string getCity();

        void setState(std::string);
        std::string getState();

        void setZip(int);
        std::string getZip();
};

#endif
