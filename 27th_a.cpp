                                //  More about friend function 
// SUM OF TWO NUMBER OF TWO DIFFRENT CLASS 
# include<iostream>
# include<string>
using namespace std;
class Two;
class One
{
private:
    int num1;
    friend void sum(One, Two);
public:
    void set(int x){
        num1=x;
    }
    void get(){
        int x;
        cout<<"enter the  number"<<endl;
        cin>>x;
        set(x);
    }
    // void display()
};
class Two{
    int num2;
    friend void sum(One, Two);
public:
    void set2(int y){
        num2=y;
    }
    void get2(){
        int y;
        cout<<"enter the  number"<<endl;
        cin>>y;
        set2(y);
    }
};
void sum(One o,Two t){
    cout<<"The sum of two numbers of two different classes are :- "<< o.num1+t.num2 <<endl;
       
}
int main()
    {
        One obj1;
        obj1.get();
        Two obj2;
        obj2.get2();
        sum(obj1,obj2);
        return 0;
    }