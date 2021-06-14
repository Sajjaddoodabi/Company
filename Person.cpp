#include "Person.h"

//constructors
Person::Person() {
    setName(" ");
    id = " ";

    address.setStreet(" ");
    address.setCity(" ");
    address.setCountry(" ");
}

Person::Person(const string &na, const string &i, const Address &address1) {
    setName(na);
    setId(i);
    setAddress(address1);
}

//copy constructor
Person::Person(const Person &person) {
    name = person.name;
    id = person.id;
    address = person.address;
}

//getter
string Person::getName() {
    return name;
}

string Person::getId() {
    return id;
}

Address Person::getAddress() {
    return address;
}

//setter
void Person::setName(const string &na) {
    name = na;
}

void Person::setId(const string &i) {
    id = i;
}

void Person::setAddress(const Address &address1) {
    address = address1;
}