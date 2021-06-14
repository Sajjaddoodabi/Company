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

}

//copy constructor
Employee::Employee(const Employee &employee) : Person(employee) {
    hourWork = employee.hourWork;
    salaryPerHour = employee.salaryPerHour;
    workToDo = employee.workToDo;
    workDone = employee.workDone;
}