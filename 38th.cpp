// Mutiple inheritance

#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    string name;
    int age;
    A() {}
    void display()
    {
        cout << "Name is :- " << name << endl;
        cout << "Age is :- " << age << endl;
    }
};
class B
{
public:
    B() {}
    string course;
    int year;
    void display2()
    {
        cout << "Course :-" << course << endl;
        cout << "Year :-" << year << endl;
    }
};
class C : public A, public B
{
public:
    
    C(string x, string y, int z, int z2)
    {
        name = x;
        course = y;
        year = z;
        age = z2;
    }
};
int main()
{
    C obj("ansh","M.TECH",2023,23);
    obj.display();
    obj.display2();
    return 0;
}