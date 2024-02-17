//                               call by value and call by refernce 

// call by value 
/*

# include<iostream>
using namespace std;

int call_by_value(int a, int b){
    int c= a+b;
    return c;
}
// swaping two numbers by (call by value) 
void swap_by_value(int a,int b){
cout<<"swaping of formal parameter "<< endl;
       
cout<<"before swaping"<<endl;
cout<<" The value of a is :- "<<a<<"\n The value of b is :- " <<b <<endl;
   
int temp=a;
a=b;
b=temp;
cout<<"After Swaping"  <<endl;
   
cout<<"the value of a :- "<<a<<"\n and the value of b is :- "<<b<<endl;
cout<<" Now check the value of Actual Parameter ( num1 and num2) "  <<endl;
   
}




int main()
 {
    int num1,num2;
        cout<<"enter the 1st number"<<endl;
        cin>>num1;
        
        cout<<"enter the 2nd number"<<endl;
        cin>>num2;

    // cout<<"the value of a and b is :- "<< call_by_value(num1 , num2) <<endl;
    
    cout<<" Before change  num1 is :-  "<<num1 <<" and num2 is :- "<< num2  <<endl;
    cout<<" calling swap_by_value function" <<endl;
    swap_by_value(num1,num2) ;
    cout<<" After change  num1 is :-  "<<num1 <<" and num2 is :- "<< num2  <<endl;
    cout<<"There is no change in actual parameter becoz a copy of actual parameter "<<endl;
             
    
    return 0;
 }
*/


 // call by reference 
// 1st way (by pointer)

# include<iostream>
using namespace std;
    
// by pointer 
void swap_by_pointer(int* a, int* b){
    cout<<"\t\t\t\t\t BY POINTER "<< endl;
    int temp= *a;
    *a=*b;
    *b= temp;
}
//function prototype
void swap_by_refernce(int &a, int &b);

int main()
 {
    int num1,num2;
    
cout<<"\t\t\t\t\t CALL BY REFERNCE "  <<endl;
   

    cout<<"enter the 1st number"<<endl;
        cin>>num1;
        
        cout<<"enter the 2nd number"<<endl;
        cin>>num2;
cout<<"Before swapping  "  <<endl;
cout<<"num1 is :-  "<<num1 <<" and num2 is :- "<< num2  <<endl;

 swap_by_pointer(&num1,&num2);
// swap_by_refernce(num1,num2);
 cout<<"After swapping "  <<endl;      
cout<<"num1 is :-  "<<num1 <<" and num2 is :- "<< num2  <<endl;

    



    return 0;
 }

 void swap_by_refernce(int &a, int &b){
    cout<<"\t\t\t\t\t BY REFERNCE VARIABLE "  <<endl;
    int temp= a;
    a=b;
    b= temp;
}
