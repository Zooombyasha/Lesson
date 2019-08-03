#ifndef PHONE1_H
#define PHONE1_H

class Phone
{
public:
    Phone();
    explicit Phone(int num);
    virtual ~Phone();
    virtual int size() const;
    void setPhone(int c, int n);
//    {
//        code = c;
//        number = n;
//    }
    int phone() const;
protected:
    int code;
    int number;
    int *buffer;
private:
    int a;
public:
    int b;
};


#endif // PHONE1_H
