#include<iostream>
using namespace std;
class Student
{
    string name,course;
    int year;
    public:
        void getdata()
        {
            cout<<"enter name";
            cin>>name;
            cout<<"Enter course";
            cin>>course;
            cout<<"Enter year";
            cin>>year;
        }
        void putdata()
        {
            cout<<"Enter name"<<name <<endl;
            cout<<"Course="<<course<<endl;
            cout<<"Year="<<year<<endl;
        }
};
int main()
{
    Student obj[25];
    int n,i;
    cout<<"enter no. of students";
    cin>>n;
    for(i=0;i<n;i++)
    {
        obj[1].getdata();
    }
    for(i=0;i<n;i++)
    {
        obj[1].putdata();
    }
    return 0;
}