// Ambiguity
#include <iostream>
#include <string>
using namespace std;
class Student1
{
public:
    void display()
    {
        cout << "Hello Bhongumon" << endl;
    }
};
class Student2
{
public:
    void display()
    {
        cout << "Hello Mutkumon"<<endl;
    }
};
class Tech : public Student1, public Student2
{
public:
    int a;
    void display(){
        Student1 :: display();
    }
};
int main()
{
    Tech t1;
    t1.display();
    return 0;
}