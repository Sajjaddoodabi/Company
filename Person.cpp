#include "Person.h"

//constructors
Person::Person() {

}

Person::Person(const string &na, const string &i, const Address &address1) {

}

//copy constructor
Person::Person(const Person &person) {
    name = person.name;
    id = person.id;
    address = person.address;
}