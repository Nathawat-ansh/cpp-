// static data members and static member function

// statics data members
// we are here to create a variable  use to count the number of objects
/*
#include <iostream>
using namespace std;
class Abc
{
        int id;
        static int count;
    public:
        void display();
        void take()
        {
        count++;
        cout << "enter the id for object "<< count <<" is :-" <<endl;
        cin >> id;

        }
};
int Abc :: count;
void Abc ::display()
{
    cout << "ID :- " << id << " & Object :- " << count<<endl;
}

int main()
{
    Abc obj1, obj2, obj3;
    obj1.take();
    obj1.display();

    obj2.take();
    obj2.display();

    obj3.take();
    obj3.display();

    return 0;
}
*/

// static data member

/* //normal example
# include<iostream>
# include<string>
using namespace std;
class Abc
{
private:
    string name;
    static int num;
    void set_det();
public:
    void count(){
        num++;
        set_det();
        cout<< "This is object "<<num<<endl;
        cout<<"Name of the object is :- "<< name <<endl;

    }
};
int Abc :: num;
void Abc :: set_det(){
    cout<<"Enter the name"<<endl;
    cin>>name;
}
int main()
{
Abc obj1, obj2, obj3;
obj1.count();
obj2.count();
obj3.count();

return 0;
}
*/

// static member functions

// #include <iostream>
// #include <string>
// using namespace std;
// class Abc
// {
// private:
//     static int count_obj;
//     int id;
//     void set(void);

// public:
//     void display();
//     static void method()
//     {
//         cout << "This is object " << count_obj << endl;
//     }
// };
// int Abc :: count_obj;
// void Abc ::display()
// {
//     set();
//     cout << "The id of the student is  " << id << endl;
// }
// void Abc ::set()
// {
//     cout << "enter the id of student" << endl;
//     cin >> id;
//     count_obj++;
// }
// int main()
// {
//     Abc obj1, obj2, obj3;
//     obj1.display();
//     Abc::method(); // we can call static method without any object
    
//     obj2.display();
//     Abc::method();
    
//     obj3.display();    
//     Abc::method();
//     return 0;
// }



# include<iostream>
# include<string>
using namespace std;
class Abc
{
    static int count;

public:
    void increment(){
        count ++;
    }
    static void function1(){
        cout << "This is object "<<count<<endl;
    }
};
int Abc :: count;
int main()
{
Abc obj1, obj2, obj3;

obj1.increment();
Abc::function1();
// obj1.function1(); // this is also working (we can access static member function through object)

obj2.increment();
Abc::function1();
// obj2.function1();

obj3.increment();
Abc::function1();
// obj3.function1();
return 0;
}