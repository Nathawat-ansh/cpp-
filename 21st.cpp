// // array in classes

// #include <string>
// #include <iostream>
// using namespace std;

// class Arr
// {
// private:
//     string name[20];
//     int reg_id[20];
//     int counter;
//     // void setdata();

// public:
//     void count()
//     {
//         counter = 0;
//     }
//     void display(void);
//     void getdata(void);
// };

// void Arr ::getdata(void)
// {
//     cout << "enter the name of " << counter + 1 <<" :- " << endl;
//     cin >> name[counter];
//     cout << "enter the registration id  of " << counter + 1 <<" :- "<< endl;
//     cin >> reg_id[counter];
//     counter++;
// }
// void Arr ::display()
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "Name of the candidate is " << name[i] ;
//         cout << " Registration id of the candidate is " << reg_id[i] << endl;
//     }
// }

// int main()
// {
//     Arr obj1;
//     obj1.count();
//     obj1.getdata();
//     obj1.getdata();
//     obj1.getdata();
//     obj1.getdata();
//     obj1.display();
//     return 0;
// }

// Array in class

#include <iostream>
#include <string>
using namespace std;
class Abc
{
private:
    int num[100];
    string name[100];
    int count;
    void get_det();

public:
    void counter(){
        count=0;
    }
    void entries();
    void display();
};

void Abc ::entries()
{
    cout << "how many entries you want" << endl;
    cin >> count;
    get_det();
}
void Abc ::get_det()
{
    for (int i = 0; i < count; i++)
    {
        cout << "enter the name" << endl;
        cin >> name[i];
        cout << "enter the " << i + 1 << " number" << endl;
        cin >> num[i];
    }
        cout<<endl;
}
void Abc ::display()
{
    for (int i = 0; i < count; i++)
    {
        cout << "Name :- " << name[i] << endl<<"Stored value :- " << num[i] << endl;
    }
}

int main()
{
    Abc obj1;
    obj1.entries();
    cout<<"Displaying Details...."<<endl;
    obj1.display();
    return 0;
}
