                                // friend function //
# include<iostream>
# include<string>
using namespace std;
class Abc
{
private:
    string name;
    int age;
    int year;
   
    friend void fun1(Abc var);
public:
    void get(){
        cout<<"enter the name"<<endl;
        cin>>name;
        
        cout<<"enter the age"<<endl;
        cin>>age;
        
        cout<<"enter the year"<<endl;
        cin>>year;
}
};
void fun1(Abc var){
    cout<<"name is "<< var.name <<endl;
    cout<<"age is "<<var.age  <<endl;
    cout<<" year is "<<var.year  <<endl;
}
int main()
{
    Abc obj1;
    obj1.get();
    fun1(obj1);
    return 0;
}