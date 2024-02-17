                             // passing object as a arguments

# include<iostream>
# include<string>
using namespace std;
class decimal
{
private:
    float  num1  ;
    float  num2  ;
    static int count;
    static int count2;
public:
    void get();
    void set(float a, float b){
        num1=a;
        num2=b;
        cout<<"The decimal number is :-"<<endl;
    }
    void Display_details(){
        cout<< num1<<"."<<num2 <<endl;
           count++;
    }
    void add_decimal(decimal a,decimal b){

        num1=a.num1+b.num1;
        num2=a.num2+b.num2;
        cout<<"The sum of two decimal  number is :- "<<endl;
           
        Display_details();
    }
};
int decimal :: count=1;
int decimal :: count2=1;
void decimal :: get(){
    cout<<endl;
    cout<<"\t\t enter object " <<count <<" details"<<endl;
    int a,b;
    cout<<"enter the 1st number"<<endl;
    cin>>a;
        
    cout<<"enter the 2nd number"<<endl;
    cin>>b;
    set(a,b);
    }

int main()
{
decimal obj1,obj2,obj3;
obj1.get();
obj1.Display_details();
obj2.get();
obj2.Display_details();
obj3.add_decimal(obj1,obj2);
return 0;
}