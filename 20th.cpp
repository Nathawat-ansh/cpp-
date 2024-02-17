
// nesting of member function 

/*
# include<iostream>
# include<string>
using namespace std;
class Abc
{
private:
        string name;
        void setdata();
public:
        void display(void);
};

void Abc :: display(void){
    setdata();
    cout<<"Hello "<< name<<endl;
}

void Abc :: setdata(){
    cout<<"enter the name"<<endl;
    cin>>name;
}

int main()
{
    Abc ansh;
    ansh.display();
    // ansh.setdata();
    return 0;
}
*/

// program for checcking a number is binary 

# include<iostream>
# include<string>
using namespace std;
class Abc
{
private:
    string a;
    void check();
public:
    void get();
    void display();
    void once_comp();
};

void Abc :: get(){
    // function defination
    cout<<"enter the  number"<<endl;
    cin>>a;
    check();
    cout<<"Display Binary code "  <<endl;
}

void Abc :: check(){
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i)!='0' && a.at(i)!='1'){
            cout<<"Invalid Binaray code"<<endl;
            exit(0);
        }
    }
}
void Abc :: display(){
    for (int i = 0; i < a.length(); i++)
    {
        cout<<a.at(i);
    }
    cout<<endl;       
}
void Abc :: once_comp(){
    cout<<"The Once Complemrnt of Binary number is :- " <<endl;
       
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i)=='0'){
            a.at(i) = '1';
        }       
        else{
            a.at(i) ='0';
        }
        /* code */
    }
    display();
    
}


int main()
{
    Abc obj;
    obj.get();
    obj.display();
    obj.once_comp();


return 0;
}