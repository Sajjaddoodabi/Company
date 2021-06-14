#include "Company.h"

Company::Company(int budget, Boss *boss1, Employee **employee1) {
    this->budget = budget;

    boss = new Boss(*boss1);

    employee = new Employee *[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employee[i] = new Employee(*employee1[i]);
    }
}

Company::Company(const Company &company) {
    budget = company.budget;
    boss = company.boss;

    employee = new Employee *[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employee[i] = new Employee(*company.employee[i]);
    }
}

Company::~Company() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        delete employee[i];
    }
    delete[] employee;

    delete boss;
}

//getter
int Company::getBudget() {
    return budget;
}

Boss *Company::getBoss() {
    return boss;
}

Employee **Company::getEmployee() {
    return employee;
}

//setter
void Company::setBudget(int budget) {
    this->budget = budget;
}

void Company::setBoss(Boss *boss1) {
    boss = boss1;
}

void Company::setEmployee(Employee** employee1) {
    employee = employee1;
}

//calculating max efficient employee
Employee *Company::maxEfficiency() {
    Employee *maxEfficient = employee[0];
    for (int i = 1; i <= boss->getNumberOfEmployees(); ++i) {
        if (maxEfficient->efficiency() < employee[i]->efficiency())
            maxEfficient = employee[i];
    }
    return maxEfficient;
}

double Company::averageEfficiency() {
    double average = 0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        average += employee[i]->efficiency();
    }
    average /= boss->getNumberOfEmployees();

    return average;
}