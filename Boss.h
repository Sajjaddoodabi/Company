#ifndef COMPANY_BOSS_H
#define COMPANY_BOSS_H

#include "Employee.h"

class Boss : public Employee {
private:
    int numberOfEmployees;
public:
    //constructors
    Boss();
    Boss(const string & name , const string & id , const Address &address1 , int hw , int sph , int wtd , int wd , int noe);

    //copy constructor
    Boss(const Boss &);
};


#endif //COMPANY_BOSS_H