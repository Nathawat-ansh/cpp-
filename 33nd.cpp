                        // Dynamic initialization of objects
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int salary;
    string name;
    string course; 
    static int count;
    public : Student()
    {
        // defalut constructure
    }
    Student(string a, string b="MCA", int c=550000);
    Student(string a, string b, float c);
    void display_det(){
        cout<<"\t\tStudent  "<<count<<" details :"  <<endl;
           

        cout<<"Name is :- "<<name  <<endl;
        cout<<"Course is :- "<<course  <<endl;
        cout<<"salary is :- "<<salary  <<endl;
           
    }
};
int Student:: count=1;
Student::Student(string a, string b, int c)
{
    name = a;
    course = b;
    salary = c;
}
Student::Student(string a, string b, float c)
{
    name = a;
    course = b;
    salary = c;
}
int main()
{
    Student s1, s2, s3;
    string name, course;
    int salary;
    float salary2;
    string choose;

    cout << "enter the Name" << endl;
    cin >> name;
    
    cout << "enter the Course" << endl;
    cin >> course;

    cout << "enter the salary " << endl;
    cin >> salary2;
    s1=Student(name, course, salary);
  
    s1.display_det();
    
    cout << "enter the Name" << endl;
    cin >> name;
    
    cout << "enter the Course" << endl;
    cin >> course;

    cout << "enter the salary " << endl;
    cin >> salary2;
    s2=Student(name,course,salary2);
    s2.display_det();
    return 0;
}