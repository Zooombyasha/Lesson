#include <iostream>
#include <string>
#include "contacts.h"

int main(int argc, char *argv[])
{
    Phone *p = new Contacts;
    std::cout << p->size() << std::endl;
    delete p;
    Phone p2 = Phone(5);
    p2.b;
    int b=0;
    std::string k;
    std::cin >> k;
    int c;
    for(unsigned int i=0; i<k.size(); i++)
    {
        int first = k[i];
        int second = k[i+1];
        if(second - first == 1 || second - first == 33 || first - second == 31)
        {
            c=i;
            do
                b++;
            while(second - first == 1 || second - first == 33 || first - second == 31);
            std::cout << k.substr(c, b+1) << std::endl;
            b=0;
        }
//        else if(b!=0)
//            break;
    }  
    if(b == 0)
    {
        std::cout << "No substrings" << std::endl;
        return 0;
    }
    return 0;
}

