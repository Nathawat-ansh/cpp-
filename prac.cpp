// swipping values of two class
# include<iostream>
# include<string>
using namespace std;

class Student
{
private:
    
public:
    void set();
    void get();
    void display();
};
void Student :: set(){
}
void Student :: get(){
}
void Student :: display(){
}
int main()
    {
        Student obj1;
        obj1.get();
        obj1.display();
        return 0;
    }