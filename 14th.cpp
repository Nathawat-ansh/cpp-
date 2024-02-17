// function 
# include<string.h>
# include<iostream>
using namespace std;
string func(){
    string str="hello aj";
    return str;
}
int func2(int a, int b){
    return a+b;

}
int main()
 {
    // normal function 
    cout<<func()<<endl;
    // function with argument 
    int num1,num2;
    
    cout<<"enter the 1st number"<<endl;
    cin>>num1;
        
    cout<<"enter the 2nd number"<<endl;
    cin>>num2; 

    cout<<"the sum of two number is :- "<< func2(num1, num2)  <<endl;
       
    return 0;
     }
     