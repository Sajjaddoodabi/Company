#ifndef COMPANY_COMPANY_H
#define COMPANY_COMPANY_H

#include "Boss.h"
#include <fstream>

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

    //gifting some hourWork
    void gift();

    void payForService();

    //checking company's Financial conditions
    bool isEnoughBudget();

    //filing details
    void writeOnFile();

};


#endif //COMPANY_COMPANY_H
