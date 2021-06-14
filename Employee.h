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

    //getter
    int getHourWork();
    int getSalaryPerHour();
    int getWorkToDo();
    int getWorkDone();

    //setter
    void setHourWork(int );
    void setSalaryPerHour(int);
    void setWorkToDo(int);
    void setWorkDone(int);

    //function to calculate the salary
    virtual int calculateSalary();

    //function to calculate how efficient our employee is
    int efficiency();

    //overriding validate function
    bool validate(string id) override;

    //input output operators
    friend ostream& operator << (ostream& , const Employee&);
    friend istream& operator >> (istream& , Employee&);

};


#endif //COMPANY_EMPLOYEE_H
