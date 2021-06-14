#include "Address.h"

//constructors

Address::Address() {
    setCountry(" ");
    setCity(" ");
    setStreet(" ");
}

Address::Address(const string &srt, const string &ci, const string &con) {
    setCountry(con);
    setCity(ci);
    setStreet(srt);
}

//getter
string Address::getCountry() {
    return country;
}

string Address::getCity() {
    return city;
}

string Address::getStreet() {
    return street;
}

//setter
void Address::setCountry(const string &co) {
    country = co;
}

void Address::setCity(const string &ci) {
    city = ci;
}

void Address::setStreet(const string &st) {
    street = st;
}

//input output operators
ostream &operator<<(ostream &strm, const Address &address) {
    strm << address.country << " , " << address.city << " , " << address.street << endl;
    return strm;
}

istream &operator>>(istream &strm, Address &address) {
    cout << "country : " << endl;
    strm >> address.country;

    cout << "city : " << endl;
    strm >> address.city;

    cout << "street : " << endl;
    strm >> address.street;

    return strm;
}

//assign operator
Address &Address::operator=(Address address){
    country = address.country;
    city = address.city;
    street = address.street;

    return *this;
}