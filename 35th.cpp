// inheritance

// Syntex of inheritance
// class {{derived class name}} : {{visibility mode}} {{base class name}}
// {
//     methods || members
// }

// Example:-

#include <iostream>
#include <string>
using namespace std;

class Baap
{
public:
    int paise=100000;
    string property="1_ghar";
    Baap(){}
    Baap(string a, int b)
    {
        property = a;
        paise = b;
    }
    void vasihat()
      {
        cout << "Property :- " << property << endl;
        cout << "Paise :-" << paise << endl;
      }
};
class Beta : public Baap
{
private:
    string name;
public:
    Beta(){}
    Beta(Baap & obj){
        paise=obj.paise;
        property=obj.property;
    }
    void actual_property(){
        cout<<"Baap ki Property :- "<<property <<endl;
        cout<<"Baap ka Paise :- "<<paise <<endl;
           
    }
};

int main()
{
    Baap abc, One("5_bangla",10000000);
    cout<<"\t\tBAAP KI PROPERTY"<<endl;
    One.vasihat();
    cout<<endl;
    cout<<"\t\tBETA KI PROPERTY"<<endl;
    Beta two;
    two.vasihat();
    cout<<"Actual Vasihat"<<endl;
    Beta rtr(One);
    rtr.actual_property();
    return 0;
}
