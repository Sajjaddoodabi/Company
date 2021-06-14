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

//changing inefficient boss
void Company::changeBoss() {
    if (boss->efficiency() < 40) {
        for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
            if (employee[i] == maxEfficiency()) {
                int numberOfEmployee = boss->getNumberOfEmployees();
                Employee *temp = boss;
                boss = dynamic_cast<Boss *>(employee[i]);
                employee[i] = temp;
                boss->setNumberOfEmployees(numberOfEmployee);
                break;
            }
        }
    }
}


//gifting some hourWork
void Company::gift() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        if(employee[i]->getId().substr(0 , 2) < "90")
            employee[i]->setHourWork(employee[i]->getHourWork() + 5);
        if (employee[i] == maxEfficiency())
            employee[i]->setHourWork(employee[i]->getHourWork() + 10);
    }
}

void Company::payForService() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->getAddress().getCity() != "Tehran") {
            employee[i]->setHourWork(employee[i]->getHourWork() + 7);
        }
    }
}

bool Company::isEnoughBudget() {
    int sumSalary = 0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        sumSalary += employee[i]->calculateSalary();
    }

    if (sumSalary > budget)
        return false;
    else
        return true;
}

void Company::writeOnFile() {
    ofstream save("company.txt");

    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        save << employee[i]->getName() << employee[i]->getId() << employee[i]->efficiency() <<
             employee[i]->calculateSalary();
    }
}