// copy constructor
// simple

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// private:
//     int num;

// public:
//     Student(){}
//     Student(int a){
//         cout<<"parameterized constructor called"<<endl;
//         num=a;
//     }
//     Student(Student &s1){
//         cout<<"copy constructor called"<<endl;
//         num=s1.num;
//         display();
//     }
//      void display();
// };
// void Student ::display()
// {
//     cout<<"the number is :-"<<num<<endl;
// }
// int main()
// {
//     Student obj1;
//     int number;
//     cout<<"enter number"<<endl;
//     cin>>number;

//     obj1=Student(number);
//     obj1.display();
//     Student obj2(obj1);

//     return 0;
// }

  // complex
# include<iostream>
# include<string>
using namespace std;
class Student
{
private:
    int age;
    string name;
    string course;
public:
    Student(string a,string c, int b);
    Student(Student &obj ,int b=23){
        cout<<"copy constructor"<<endl;
        name=obj.name;
        course=obj.course;
        age=b;
        display();
    }
    void display();
};
Student::Student(string a, string c,int b){
    name=a;
    age=b;
    course=c;
}
void Student :: display(){
    cout<<"Name is :- "<<name   <<endl;
    cout<<"Course is :- "<<course  <<endl;
    cout<<"Age is :- "<<age  <<endl;
       
}
int main()
    {
        Student obj1("ansh","M.TECH",21);
        // obj1.get();
        obj1.display();
        Student obj2(obj1);

        return 0;
    }