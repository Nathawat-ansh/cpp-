                                // parameterized constructor 
# include<iostream>
# include<string>
using namespace std;
class Student
{
private:
    string name;
    int age;    
public:
    Student(string a, int b){
        cout<<" This is parameterized constructor"  <<endl;
        name=a;
        age=b;
    }
    
    void display(){
        cout<<"Name is :- "<< name <<endl;
        cout<<"Age is :- "<< age <<endl;
    }
};
int main()
    {
        Student obj1("ansh", 21);        
        obj1.display();
        return 0;
    }