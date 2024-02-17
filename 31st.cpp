// constructor overloading
# include<iostream>
# include<string>
using namespace std;

class Student
{
private:
    string name;
    string course;
     int age;
public:
    Student(){  
        get();
        cout<<"Default constructor "  <<endl;
    }
    Student(string a, string b){
        cout<<" Parameterized constructor"<<endl;
           
        name=a;
        course=b;
    }
    Student(string a, int b){
        cout<<"another constructor "<<endl;
           
        name=a;
        age=b;
    }
    
    void get();
    void display();
    void details(){
        cout<<"Name is :- "<< name <<endl;
        cout<<"Age is :- "<< age <<endl;
           
    }
};
void Student :: get(){
    cout<<"enter the name"<<endl;
    cin>>name;
    
    cout<<"enter the course"<<endl;
    cin>>course;
}
void Student :: display(){
    cout<<"Name is :- "<<name  <<endl;
    cout<<"Course is :-"<<course  <<endl;
       
}
int main()
    {
        Student obj1,obj2("shivani", "M.TECH"),obj3("cronin",23);
        obj1.display();
        obj2.display();
        obj3.details();
        return 0;
    }