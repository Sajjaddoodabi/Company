#ifndef COMPANY_COMPANY_H
#define COMPANY_COMPANY_H

#include "Boss.h"

using namespace std;

class Company {
private:
    int budget;
    Employee **employee;
    Boss *boss;
public:
    //constructor
    Company(int budget, Boss *boss1, Employee **employee1);

    //copy constructor
    Company(const Company&);

    //destructor
    ~Company();

    //getter
    int getBudget();
    Boss *getBoss();
    Employee **getEmployee();

    //setter
    void setBudget(int);
    void setBoss(Boss *);
    void setEmployee(Employee**);

    //calculating max efficient employee
    Employee *maxEfficiency();

    //company's average efficiency
    double averageEfficiency();

    //changing inefficient boss
    void changeBoss();
};


#endif //COMPANY_COMPANY_H
