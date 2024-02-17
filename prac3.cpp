// multiple inheritance through function 

# include<iostream>
# include<string>
using namespace std;

class Student
{
protected:
    string name;
    string course;
public:
    void set(string a, string b);
};
void Student :: set(string a, string b){
    name=a;
    course=b;
}

class Student_det
    { 
    protected:
        int year;
        int age;
    public:
            void set_det(int x, int y){
                year=x;
                age=y;
            }
    };
class Deatils:public Student,public Student_det{
    public:
        void display(){
            cout<<"Name :-"<<name   <<endl;
            cout<<"Course :-"<<course  <<endl;
            cout<<"Age :-"<<age  <<endl;
            cout<<"Year :-"<< year  <<endl;
               
        }
};
int main()
    {   
        Deatils obj1;
        obj1.set("Ansh","MCA");
        obj1.set_det(2023,23);
        obj1.display();
        return 0;
    }
