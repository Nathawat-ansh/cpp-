// constant, manipulators & operator precedence
# include<iostream>
# include<iomanip>
using namespace std;

int main()
{
            // constants
    // const int x=5;
    // cout<<x<<endl;
    // // x=45;  // this will give an error (read only variable)

    // manipulators
    // 1st endl (end line)
    cout<<"we are using endl(next line) manipulator"<<endl;
    
    // 2nd setw(set width) 
    int a=4, b=54,c=12345;

    cout<<"without setw :- "<<a<<endl;
    cout<<"without setw :- "<<b<<endl;
    cout<<"without setw :- "<<c<<endl;

    cout<<"with setw :- "<<setw(5)<<a<<endl;
    cout<<"with setw :- "<<setw(5)<<b<<endl;
    cout<<"with setw :- "<<setw(5)<<c<<endl;



         
    return 0;

}
