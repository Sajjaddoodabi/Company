#include "Boss.h"

Boss::Boss() : Employee() {
    numberOfEmployees = 0;
}

Boss::Boss(const string &name, const string &id, const Address &address1, int hw, int sph, int wtd, int wd, int noe)
        : Employee(name, id,address1,  hw,  sph,  wtd,  wd) {

    numberOfEmployees = noe;
}

Boss::Boss(const Boss &boss) : Employee(boss) {
    numberOfEmployees = boss.numberOfEmployees;
}