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