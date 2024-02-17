
# include<iostream>
# include<string>
using namespace std;
class Abc
{
private:
    int num1;
    int num2;
    static int count;
public:
    static void counter(){
        cout<<"\t Complex number "<<count <<endl;
        count++;   
    }
    void get(int a, int b){
          
        num1=a;
        num2=b;
    }
    void display(){
        cout<<"complex number is :- "<<num1<< " + "<<num2<<"i"  <<endl;       
        }
    void sum(Abc o1, Abc o2){
        cout<<"\t Sum of complex numbers "<<endl;   
        num1 = o1.num1 + o2.num1;
        num2 = o1.num2 + o2.num2;
        display();
    }        
};
int Abc :: count=1;
int main()
{
Abc obj1, obj2, obj3;
Abc:: counter();
obj1.get(5,6);
// obj1.display();

Abc:: counter();
obj2.get(2,3);
obj2.display();

obj3.sum(obj1,obj2);
obj3.display();
return 0;
}


