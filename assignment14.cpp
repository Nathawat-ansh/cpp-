                // static members (data members and member functions) 

# include<iostream>
# include<string>
using namespace std;
class Employee
{
private:
    string  name;
    int id;
    int salary;
    static int count1;
    static int count2;
public:
    static void counter(){
        cout<<"The Total number of Employees are :- "<< count2 <<endl;
    }
    static void counter1(){
        cout<<"\t\tInsert Employee "<<count1 <<"details" <<endl;
        count1++;
    }
    static void counter2(){
        cout<<endl;
        cout<<"\t\tDisplaying Employee "<<count2<<" details... "<<endl;
        count2++;
    }
    void get();
    void Display();
};
int Employee :: count1=1;
int Employee :: count2=1;
void Employee :: get(){
    counter1();
    cout<<"Enter Employee Name"<<endl;
    cin>>name;
    cout<<"Enter Employee ID"<<endl;
    cin>>id;
    cout<<"Enter Employee Salary"<<endl;
    cin>>salary;
}
void Employee:: Display(){
    counter2();
    cout<<"Employee Name is :- "<<  name <<endl;
    cout<<"Employee ID is :- "<<    id<<endl;
    cout<<"Employee Salary is :- "<<salary  <<endl;
} 
int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    Employee* emp=new Employee[num];
    for (int i = 0; i < num; i++)
    {
        emp[i].get();    
    }
    for (int i = 0; i < num; i++)
    {
        emp[i].Display();    
    }
    emp[1].counter();
return 0;
}