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