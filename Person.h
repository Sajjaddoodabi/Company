#ifndef COMPANY_PERSON_H
#define COMPANY_PERSON_H

#include <iostream>
#include "Address.h"

using namespace std;

class Person {
protected:
    string name;
    string id;
    Address address;
public:

    //constructors
    Person();

    Person(const string &na, const string &i, const Address &address1);

    //copy constructor
    Person(const Person &);

    //getter
    string getName();

    string getId();

    Address getAddress();

    //setter
    void setName(const string &);

    void setId(const string &);

    void setAddress(const Address &);

    //checking if id is valid
    virtual bool validate(string id);

    //io stream
    friend ostream& operator << (ostream& ,const Person&);
    friend istream& operator >> (istream& , Person&);

    //assign operators
    virtual Person& operator = (const Person &);

};

#endif //COMPANY_PERSON_H
