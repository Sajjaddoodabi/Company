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
};


#endif //COMPANY_ADDRESS_H
