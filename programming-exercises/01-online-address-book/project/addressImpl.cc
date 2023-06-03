#include <iostream>
#include <cstring>

#include "inc/Address.h"

using namespace std;

Address::Address()
{
    std::cout << "Address Constructor Implementation" << std::endl;
}

Address::setStreetAddress(std::string sa)
{
    this.sa = sa;
}
