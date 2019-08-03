#ifndef CONTACTS_H
#define CONTACTS_H
#include "phone1.h"
#include <string>

class Contacts:public Phone
{
public:
    int size() const;
    void setName(std::string n);
private:
    std::string name;
};

#endif // CONTACTS_H
