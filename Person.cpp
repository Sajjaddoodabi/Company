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

//check the id in in setId instead of constructor
//because if anyone wants to edit a id , they need to enter valid id
void Person::setId(const string &i) {
    bool isOk = validate(i);
    if (isOk)
        id = i;
    else {
        cout << "invalid id" << endl;
        exit(1);
    }
}

void Person::setAddress(const Address &address1) {
    address = address1;
}

//checking validation of id
bool Person::validate(string id) {
    char id1[10];
    strcpy(id1, id.c_str());

    if (id.length() < 8 && id.length() > 10) {
        cout << "invalid id!" << endl;
        return false;
    }

    //checking first two ints
    //converting first two chars into ints
    int n1, n2;
    n1 = id1[0] - '0';
    n2 = id1[1] - '0';

    if (n1 < 8) {
        cout << "First two numbers should be your entry year!" << endl;
        return false;
    }

    if (n1 == 8 && n2 < 4) {
        cout << "First two numbers should be your entry year!" << endl;
        return false;
    }

    //checking the 3 chars
    int check = 3;

    char id2[3];
    strcpy(id2, id.substr(2, 3).c_str());

    for (int i = 0; i < 2; ++i) {

        //checking if they are chars or ints
        //they shouldn't be ints
        if (id2[i] > 0 && id2[i] < 9) {
            check--;
        }
        if (check == 0){
            cout << "indexes 2 to 4 should be a character!" << endl;
            return false;
        }
    }

    //checking the rest of id
    for (int i = 5; i < id.length(); ++i) {
        n1 = id1[i] - '0';
        if (n1 > 4 && n1 < 6) {
            cout << "invalid id 'in last characters' !" << endl;
            return false;
        }
    }
    return true;
}
