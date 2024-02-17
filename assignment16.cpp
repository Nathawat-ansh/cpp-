                                            // this pointer 

# include<iostream>
# include<string>
using namespace std;
class Employee
{
private:
    string emp_name;
    int emp_id;
    string emp_salary;
public:
    Employee(string name, int id, string salary){
        this->emp_name=name;
        this->emp_id=id;
        this->emp_salary=salary;

    }
    void Display();
};
void Employee :: Display(){
        cout<<"Employee Name    :- "<<emp_name  <<endl;
        cout<<"Employee ID      :- "<<emp_id  <<endl;
        cout<<"Employee Salary  :-"<<emp_salary  <<endl;

}

int main()
{
Employee obj1("Ansh", 2, "$100000");
obj1.Display();
return 0;
}