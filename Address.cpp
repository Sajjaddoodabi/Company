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