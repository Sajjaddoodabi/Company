#include "Company.h"


Company::Company() {
    budget = 0;
    boss = new Boss();

    employee = new Employee *;
//    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
//            employee[i] = new Employee(*employee[i]);
//    }
}

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

void Company::setEmployee(Employee **employee1) {
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

                Employee *temp = employee[i];
                employee[i] = static_cast<Employee *>(boss);
                setBoss(dynamic_cast<Boss *>(temp));

                boss->setNumberOfEmployees(numberOfEmployee);
                break;
            }
        }
    }
}


//gifting some hourWork
void Company::gift() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->getId().substr(0, 2) < "90")
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

ostream &operator<<(ostream &strm, const Company &company) {

    Employee *temp;
    bool check = false;

    for (int i = 0; i < company.boss->getNumberOfEmployees() && !check; ++i) {
        check = true;
        for (int j = 0; j < (company.boss->getNumberOfEmployees() - i - 1); ++j) {
            if (company.employee[j]->getId().substr(0, 2) > company.employee[j + 1]->getId().substr(0, 2)) {
                check = false;
                temp = company.employee[j];
                company.employee[j] = company.employee[j + 1];
                company.employee[j + 1] = temp;
            }
            if (company.employee[j]->getId().substr(0, 2) == company.employee[j + 1]->getId().substr(0, 2)) {
                if (company.employee[j]->getName() > company.employee[j + 1]->getName()) {
                    check = false;
                    temp = company.employee[j];
                    company.employee[j] = company.employee[j + 1];
                    company.employee[j + 1] = temp;
                }
            }
        }
    }

    cout << "Boss" << endl;
    strm << *company.boss;
    cout << "----------------------------" << endl;

    for (int i = 0; i < company.boss->getNumberOfEmployees(); ++i) {
        cout << "employee[" << i + 1 << ']' << endl;
        strm << *company.employee[i] << endl;
        cout << "----------------------------" << endl;
    }
    return strm;
}

istream &operator>>(istream &strm, Company &company) {
    cout << "the budget: ";
    strm >> company.budget;

    cout << "boss:" << endl;
    strm >> *company.boss;

    for (int i = 0; i < company.boss->getNumberOfEmployees(); ++i) {
        cout << i + 1 << " employee:" << endl;
        strm >> *company.employee[i];
    }
    return strm;
}

