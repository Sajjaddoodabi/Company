#ifndef COMPANY_ADDRESS_H
#define COMPANY_ADDRESS_H

#include <iostream>
#include <cstring>

using namespace std;

class Address {
private:
    string country;
    string city;
    string street;
public:
    //constructors
    Address();
    Address(const string &srt , const string &ci , const string &con);

    //getter
    string getCountry();
    string getCity();
    string getStreet();

    //setter
    void setCountry(const string &);
    void setCity(const string &);
    void setStreet(const string &);

    //input output operators
    friend ostream& operator << (ostream& , const Address&);
    friend istream& operator >> (istream& , Address&);

    //assign operator
    Address& operator = (Address address);
};


#endif //COMPANY_ADDRESS_H
