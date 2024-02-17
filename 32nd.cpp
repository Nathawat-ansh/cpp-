// constructor with default argument 

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
    Student(string a,string b="M.TECH" ,int c=21){
        name=a;
        course=b;
        age=c;
    }   
    void display();
};
void Student::display(){
    cout<<"Name is :- "<<name  <<endl;
    cout<<"Course is :- "<< course  <<endl;
    cout<<"Age is :- "<<age  <<endl;
       
}
int main()
    {
        Student obj1("ansh","MCA",23),obj2("shivani"),obj3("laxmi","B.A",21);
        obj1.display();
        obj2.display();
        obj3.display();
        return 0;
    }

// # include<iostream>
// # include<string>
// using namespace std;

// class Student
// {
// private:
//     int num;
//     string name;
// public:
//     Student(int a,string b="ansh"){
//         num=a; 
//         name=b;
//     }
//     void display();
// };
// void Student :: display(){
//     cout<<"name is :-"<<name<<endl;
//     cout<<"number is :-"<<num<<endl;
       
// }
// int main()
//     {
//         Student obj1(23);
//         // obj1.get();
//         obj1.display();
//         return 0;
//     }