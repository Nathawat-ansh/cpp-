                                    // multilevel inheritance


# include<iostream>
# include<string>
using namespace std;

class A
    { 
    public:
        string name;
        A(){}	
    };
class B:public A{
    public:
    int age;
        B(){}
};
class C: public B{
    public:
        string course;
        C(string x,int y,string z){
            name=x;
            age=y;
            course=z;
        }
        void display(){
            cout<<"Name is :- "<<name  <<endl;
            cout<<"Age is :- "<<age  <<endl;
            cout<<"Course "<<course  <<endl;
        }
};
int main()
    {
        C obj1("ansh",3,"MCA");
        obj1.display();
        return 0;
    }