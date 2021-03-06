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

    //getter
    int getNumberOfEmployees();

    //setter
    void setNumberOfEmployees(int noe);

    //calculate salary (override)
    int calculateSalary() override;

    //input output operators
    friend ostream& operator << (ostream& , const Boss&);
    friend istream& operator >> (istream& , Boss&);

    //assign operator
    Boss& operator = (const Boss &);

};


#endif //COMPANY_BOSS_H
