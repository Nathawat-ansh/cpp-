// swiping object of two classes
# include<iostream>
# include<string>
using namespace std;
class Y;
class X
{
private:
    int num1;
public:
    void set(int x){
        num1=x;
    }
    friend void swap(X &,Y &);
};
class Y{
    int num2;
    public:
    void set2(int  y){
        num2=y;
    } 
    friend void swap(X &,Y &);
};
void swap(X &x1, Y &y1){
    cout<<"before swapping x is "<< x1.num1<<", and y is " <<y1.num2 <<endl;
    int temp =x1.num1;
    x1.num1=y1.num2;
    y1.num2=temp; 
    cout<<"After  swapping x is "<< x1.num1<<", and y is " <<y1.num2 <<endl;

}

int main()
    {
        X obj1;
        Y obj2;
        obj1.set(4);
        obj2.set2(5);
        swap(obj1,obj2);
        return 0;
    }