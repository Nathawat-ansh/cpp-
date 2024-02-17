                                                // single inheritance

# include<iostream>
# include<string>
using namespace std;

class Student
{
public:
    string name;
    Student(){}
    void display(){
              cout<<"Name is :-"<<name<<endl;
    }
};
class Teacher:public Student{
    public:
       Teacher(string x){
            name=x;
        }        
};
int main()
    {
        Teacher t1("ansh");
        t1.display();
        return 0;
    }

