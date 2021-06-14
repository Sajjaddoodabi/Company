#ifndef COMPANY_COMPANY_H
#define COMPANY_COMPANY_H

#include "Boss.h"

using namespace std;

class Company {
private:
    int budget;
    Employee **employee;
    Boss *boss;
};


#endif //COMPANY_COMPANY_H
