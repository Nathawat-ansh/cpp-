// //                               Friend Function

// #include <iostream>
// #include <string>
// using namespace std;
// class Abc
// {
//     private:
//         int id;
//         string name;
//         int roll_no;
//         friend void display(Abc o1);
//     public:
//         void set_det()
//         {
//             cout << "enter the name" << endl;
//             cin >> name;

//             cout << "enter the enrolment id " << endl;
//             cin >> id;

//             cout << "enter the Roll Number" << endl;
//             cin >> roll_no;
//         }
// };

// void display(Abc o1){
//     o1.set_det();
//     cout<<"The name is :- "<<o1.name  <<endl;
//     cout<<"The Entrolment Number is :- "<<o1.id  <<endl;
//     cout<<"The Roll number is :- "<<o1.roll_no<<endl;
             
// }
// int main()
// {
//     Abc obj1;
//     display(obj1);
//     return 0;
// }

                                            // frind function

# include<iostream>
# include<string>
using namespace std;
class frnd
{
private:
    string  name  ;
    int 	id  ;
    int 	 number ;
    friend void display(frnd f1);
public:
    void get()
    {
        cout<<"enter the name"<<endl;
        cin>>name;
        
        cout<<"enter the id"<<endl;
        cin>>id;
        
        cout<<"enter the  number"<<endl;
        cin>>number;
    }
};
void display(frnd f1){
    f1.get();
    cout<<"name is   :-"<<  f1.name  <<endl;
    cout<<"id is     :-"<<  f1.id  <<endl;
    cout<<"number is :- "<< f1.number <<endl;
       
}
int main()
{
    frnd obj;
    display(obj);
    return 0;
}