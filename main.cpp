#include <iostream>
#include "Company.h"

using namespace std;

int main() {

    Boss *boss = new Boss("Ali Mehrabi", "89*am12832", *(new Address("Iran", "Tehran", "Enghelab")), 5, 10000, 20, 25,
                          10);

    Employee **employee = new Employee *[boss->getNumberOfEmployees()];
    employee[0] = new Employee("Reza Moradi", "93*rh97320", *(new Address("Iran", "Shiraz", "Fattah")), 5, 8500, 18,
                               15);
    employee[1] = new Employee("Mehran Asadi", "90*mjk13320", *(new Address("Iran", "Shiraz", "Fattah")), 9, 10000, 20,
                               8);
    employee[2] = new Employee("Ahmad Ahmadi", "93*fhg90182", *(new Address("Iran", "Shiraz", "Fattah")), 6, 7000, 30,
                               15);
    employee[3] = new Employee("Ghorban Rezaie", "91*ax32320", *(new Address("Iran", "Shiraz", "Fattah")), 7, 5000, 8,
                               5);
    employee[4] = new Employee("Masoud Rahmati", "88*qq93227", *(new Address("Iran", "Shiraz", "Fattah")), 11, 5500, 6,
                               6);
    employee[5] = new Employee("Kaveh Moshiri", "85*rdg97320", *(new Address("Iran", "Shiraz", "Fattah")), 10, 11000,
                               14,
                               12);
    employee[6] = new Employee("Bahram Sedighi", "98*sdf97320", *(new Address("Iran", "Shiraz", "Fattah")), 4, 3000, 10,
                               2);
    employee[7] = new Employee("Reza Shiri", "99*rt11320", *(new Address("Iran", "Shiraz", "Fattah")), 3, 6000, 12,
                               11);
    employee[8] = new Employee("Amirhosein Momen", "94*da01203", *(new Address("Iran", "Shiraz", "Fattah")), 8, 15000,
                               25, 19);
    employee[9] = new Employee("Mohammad Rad", "87*ox19280", *(new Address("Iran", "Shiraz", "Fattah")), 2, 4000, 30,
                               25);


    Company company(3000000, boss, employee);
    const Company &company1(company);

    cout << company;

    cout << "Company's average efficiency: ";
    cout << company.averageEfficiency();
    cout << endl << "--------------------------------" << endl;

    company.writeOnFile();
    cout << "--------------------------------" << endl;

    return 0;
}