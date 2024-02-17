                            // default constructor (do not take any argument)
// simple

# include<iostream>
# include<string>
using namespace std;

class Student
{
public:
    Student(){
        cout<<"This is default constructure " <<endl;
           
    }
};

int main()
    {
        Student obj1;
        return 0;
    }


//complex
/*
# include<iostream>
# include<string>
using namespace std;

class Student
{
private:
  string name;
  string course;
public:
    Student(){
        cout<<"This is a Default constructor " <<endl;
           get();
           
    }
    void set(string ,string);
    void get();
    void display();
};
void Student :: set(string s1, string s2){
    name=s1; 
    course=s2;   
}
void Student :: get(){
    string a,b;
    cout<<"enter the name"<<endl;
    cin>>a;
    
    cout<<"enter the course"<<endl;
    cin>>b;
    set(a,b);
}
void Student :: display(){
    cout<<"Name is :- "<<name  <<endl;
    cout<<"Course is :- "<<course  <<endl;
       
}
int main()
    {
        Student obj1;
        obj1.display();
        return 0;
    }
    */