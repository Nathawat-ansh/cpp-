                                        // friend class
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    int salary;
    friend class Owner;

public:
    void display()
    {
        cout << "Employee ID is :-" << id << endl;
        cout << "Employee Salary is " << salary << endl;
    }
};
class Owner
{
    public:
    void get(Employee s2)
    {
        cout << "enter the Employee id" << endl;
        cin >> s2.id;

        cout << "enter the Employee salary" << endl;
        cin >> s2.salary;
        s2.display();
    }
};
int main()
{
    Employee obj1;
    Owner o2;
    o2.get(obj1);
    return 0;
}