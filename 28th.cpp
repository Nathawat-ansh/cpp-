                                        // constructor

# include<iostream>
# include<string>
using namespace std;

class Student
{
private:
    int age;
    string name;    
public:
    Student();
    void display();
};
Student::Student(){
    age=23;
    name="ansh";
}
void Student :: display(){
    cout<<"NAME is :- "<<name   <<endl;
    cout<<"AGE is :- "<<age  <<endl;
       
}
int main()
    {
        Student obj1;
        // obj1.get();
        obj1.display();
        return 0;
    }