#include "Employee.h"

//constructors
Employee::Employee() : Person() {
    hourWork = 0;
    salaryPerHour = 0;
    workToDo = 0;
    workDone = 0;
}

Employee::Employee(const string &name , const string &id ,const Address &address1 , int hw, int sph, int wtd, int wd)
        : Person( name ,  id ,  address1 ) {

    setHourWork(hw);
    setSalaryPerHour(sph);
    setWorkDone(wd);
    setWorkToDo(wtd);
}

//copy constructor
Employee::Employee(const Employee &employee) : Person(employee) {
    hourWork = employee.hourWork;
    salaryPerHour = employee.salaryPerHour;
    workToDo = employee.workToDo;
    workDone = employee.workDone;
}

//getter
int Employee::getHourWork() {
    return hourWork;
}

int Employee::getSalaryPerHour() {
    return salaryPerHour;
}

int Employee::getWorkToDo() {
    return workToDo;
}

int Employee::getWorkDone() {
    return workDone;
}

//setter
void Employee::setHourWork(int hw) {
    hourWork = hw;
}

void Employee::setSalaryPerHour(int sph) {
    salaryPerHour = sph;
}

void Employee::setWorkToDo(int wtd) {
    workToDo = wtd;
}


void Employee::setWorkDone(int wd) {
    workDone = wd;
}

//function to calculate the salary
int Employee::calculateSalary() {
    int salary;
    int wtd = workToDo;
    int wd = workDone;

    salary = (hourWork * salaryPerHour);
    salary -= ((wd * salary / wtd));

    return salary;
}

//function to calculate how efficient our employee is
double Employee::efficiency() {
    double efficiency = 0;
    efficiency += (workDone * workToDo) / hourWork ;

    return efficiency;
}

//validate function(override)
bool Employee::validate(string id) {
    char id1[10];
    strcpy(id1, id.c_str());

    if (id1[2] != '*') {
        cout << "3rd character should be *! " << endl;
        return false;
    }

    return Person::validate(id1);
}

//input output operators
ostream &operator<<(ostream &strm, const Employee &employee) {

    strm << static_cast<const Person &>(employee);

    cout << "hourWork: ";
    strm << employee.hourWork;
    cout << endl;

    cout << "salaryPerHour: ";
    strm << employee.salaryPerHour;
    cout << endl;

    cout << "workToDo: ";
    strm << employee.workToDo;
    cout << endl;

    cout << "workDone: ";
    strm << employee.workDone;
    cout << endl;

    return strm;
}

istream &operator>>(istream &strm, Employee &employee) {

    strm >> static_cast<Person &>(employee);

    cout << "hourWork:";
    strm >> employee.hourWork;

    cout << "salaryPerHour:";
    strm >> employee.salaryPerHour;

    cout << "workToDo:";
    strm >> employee.workToDo;

    cout << "workDone: ";
    strm >> employee.workDone;

    return strm;
}

//assign operator
Employee &Employee::operator=(const Employee &employee) {
    Person::operator=(employee);

    hourWork = employee.hourWork;
    salaryPerHour = employee.salaryPerHour;
    workToDo = employee.workToDo;
    workDone = employee.workDone;

    return *this;
}