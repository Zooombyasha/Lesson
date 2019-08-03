#include "contacts.h"

int Contacts::size() const
{
    return 2;
}

void Contacts::setName(std::string n)
{
    name = n;
    code = 2;
}
