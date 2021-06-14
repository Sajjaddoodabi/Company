#ifndef COMPANY_EMPLOYEE_H
#define COMPANY_EMPLOYEE_H

#include "Person.h"

class Employee : Person {
private:
    int hourWork;
    int salaryPerHour;
    int workToDo;
    int workDone;
public:
    //constructors
    Employee();
    Employee(const string & name , const string & id , const Address &address1 , int hw , int sph , int wtd , int wd);

    //copy constructor
    Employee(const Employee &);
};


#endif //COMPANY_EMPLOYEE_H
