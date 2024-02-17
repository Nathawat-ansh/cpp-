                            // global and local variable

# include<iostream>
using namespace std;
// global variable
int a=7;
int global =75;
void local_var()
{  
    cout<<"the value for global variable is:-\n "<<global<<endl;
}
int main()
{
    // local variable
    int a=5,b=7;
    float pi=3.14;
    int global =56;
    cout<<"the value of a is :-"<<a <<"\n value of b is :-"<<b<<endl;
    cout<<"the value of  pie is :-\n"<<pi<<endl;
    cout<<"the value of  global variable  is :-\n"<<::a<<endl;
    cout<<"the value of  local variable  is :-\n"<<a<<endl;
    cout<<"\n\n\n\n";
    cout<<"global variable :-\n";
    local_var();
    cout<<"local variable :-  "<<global;


    return 0;

}