#include "phone1.h"

Phone::Phone():code(0), number(0)
{

}

Phone::Phone(int num)
{
    buffer = new int(num);
    code = num % 100;
    number = num / 100;
}

Phone::~Phone()
{
    delete [] buffer;
}

int Phone::size() const
{
    return 1;
}

void Phone::setPhone(int c, int n)
{
    code = c;
    number = n;
}

int Phone::phone() const
{
    return code + number;
}
