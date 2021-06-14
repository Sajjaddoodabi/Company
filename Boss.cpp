#include "Boss.h"

//constructors
Boss::Boss() : Employee() {
    numberOfEmployees = 0;
}

Boss::Boss(const string &name, const string &id, const Address &address1, int hw, int sph, int wtd, int wd, int noe)
        : Employee(name, id,address1,  hw,  sph,  wtd,  wd) {

    numberOfEmployees = noe;
}

//copy constructor
Boss::Boss(const Boss &boss) : Employee(boss) {
    numberOfEmployees = boss.numberOfEmployees;
}

//getter
int Boss::getNumberOfEmployees() {
    return numberOfEmployees;
}

//setter
void Boss::setNumberOfEmployees(int noe) {
    numberOfEmployees = noe;
}

//calculate salary (override)
int Boss::calculateSalary() {
    int salary = Employee::calculateSalary();

    salary += ((15 * salary) / 100);

    return salary;
}

//input output operators
ostream &operator<<(ostream &strm, const Boss &boss) {
    strm << static_cast<const Employee &>(boss);

    cout << "numberOfEmployees :";
    strm << boss.numberOfEmployees;
    cout << endl;

    return strm;
}

istream &operator>>(istream &strm, Boss &boss) {
    strm >> static_cast<Employee &>(boss);

    cout << "numberOfEmployees:";
    strm >> boss.numberOfEmployees;

    return strm;
}

//assign operator
Boss &Boss::operator=(const Boss &boss) {
    Employee::operator=(boss);
    numberOfEmployees = boss.numberOfEmployees;

    return *this;
}