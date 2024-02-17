                      // constructor(default parameterize and copy) and destuctors 


# include<iostream>
# include<string>
using namespace std;
class Student
{
private:
    string name;
    int id;
    int roll_no;
public:
                        // default constructor 
      Student()
      {
            cout<<" Default Constructor "<<endl;
      }  
                        // parameterize constructor
      Student(string s,int a, int b){
        cout<<"Parameterized Constructor " <<endl;
        // string n;
        name=s;
        id=a;
        roll_no=b;
      }
                        // copy construtor 
      Student(Student &cp){
        cout<<"Copy Contructor "  <<endl;       
        name=cp.name;
      }
      void display(){
        cout<<"Student Name is    :- "<<name <<endl;         
        cout<<"Student ID is      :- "<<id <<endl;     
        cout<<"Student Roll_No is :- "<<roll_no <<endl;     
      }
            // Destrucor
            ~Student(){
                cout<<"Destructor called ... " <<endl;
                   
            } 
};

int main()
{ 
Student obj1;
Student obj2("ansh",1002,3);
obj2.display();
Student obj3(obj2);
obj3.display();
return 0;
}