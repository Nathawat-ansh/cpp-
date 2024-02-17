                                        // use of friend class 

# include<iostream>
# include<string>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    string company ;
    friend class Owner;
public:
    void get(){
        cout<<"enter the Name"<<endl;
        cin>>name;
        
        cout<<"enter the ID"<<endl;
        cin>>id;
        
        cout<<"enter the Company"<<endl;
        cin>>company;
    }
};
class Owner
{
    public:
    void Display(Employee c1){
        cout<<"EMPLOYEE NAME is :-    "<<c1.name  <<endl;            
        cout<<"EMPLOYEE ID is :-      "<<c1.id <<endl;        
        cout<<"EMPLOYEE COMPANY is :- "<<c1.company <<endl;        
    }
};
int main()
{
Owner o1;
Employee emp1;
emp1.get();
o1.Display(emp1);
return 0;
}