// member freind function 

# include<iostream>
# include<string>
using namespace std;
class Student;
class Teacher{
    public: 
        void get(Student s1);
};
class Student
{
private:
    string name;
    int age;
    friend void Teacher :: get(Student s1);   
public:
    void display();
};
void Student :: display(){
    cout<<"Name is :- "<< name <<endl;
    cout<<"Age is "<< age <<endl;
          
}
void Teacher :: get(Student s1){
    cout<<"enter the Name"<<endl;
    cin>>s1.name;
    
    cout<<"enter the Age"<<endl;
    cin>>s1.age;
    s1.display();
}

int main()
    {
        Student obj1 ;
        Teacher t1;
        t1.get(obj1);
        return 0;
    }