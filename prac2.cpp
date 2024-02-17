    //   member friend function                              
# include<iostream>
# include<string>
using namespace std;
class Teacher;
class Student
{
private:
    string s_name;
    int s_id;
    friend void exchange(Student &,Teacher &);
public:
    Student(){}
    Student(string,int);
    void display();
};
Student::Student(string a, int b){
        s_name=a;
        s_id=b;
    }
void Student :: display(){
    cout<<"Student Name is :-"<<s_name<<endl;
    cout<<"ID is :-"<<s_id<<endl;
    cout<<endl;
}
class Teacher
{
    private:
        string t_name;
        int t_id;
        friend void exchange(Student &, Teacher &);
    public:
        Teacher(){}
        Teacher(string x, int y){
            t_name=x;
            t_id=y;
        }
    void display2(){
        cout<<"Teacher Name is :- "<<t_name<<endl;
        cout<<"Teacher ID is :- "<<t_id<<endl;
              
    }
};
void exchange(Student &val1,Teacher &val2){
    string temp_name=val1.s_name;
    val1.s_name=val2.t_name;
    val2.t_name=temp_name;

    int temp_id=val1.s_id;
    val1.s_id=val2.t_id;
    val2.t_id=temp_id;
}

int main()
    {
        string student_name,teacher_name;
        int student_id, teacher_id;

        Student s1;
        Teacher t1;

        cout<<"Enter Student Name :-"<<endl;
        cin>>student_name;
        
        cout<<"Enter Student ID :-"<<endl;
        cin>>student_id;
        
        cout<<"Enter Teacher Name :-"<<endl;
        cin>>teacher_name;
        
        cout<<"Enter Teacher ID :-"<<endl;
        cin>>teacher_id;
        
        s1=Student(student_name,student_id);
        t1=Teacher(teacher_name,teacher_id);
        
        cout<<"\t\t before swapping"<<endl;
        s1.display();
        t1.display2();
        
        cout<<"\t\t After swapping"<<endl;
        exchange(s1,t1);
        s1.display();
        t1.display2();
        return 0;
    }   