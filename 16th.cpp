//                       inline function, static and constant arguments 

/*
//                   inline functions

# include<iostream>
using namespace std;
 
inline int fun1(int x,int y){
    return x*y;
} 




int main()
 {
    int a,b;
    cout<<"enter the 1st number"<<endl;
    cin>>a;
        
    cout<<"enter the 2nd number"<<endl;
    cin>>b;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
    cout<<" the product of two numbers are :- "<<fun1(a,b)  <<endl;
       
  return 0;  
 }
*/

//static variable
/*

# include<iostream>
using namespace std;
 void stat_fun(){
    static int count = 1;
    cout<<count  <<endl;
    count++;       
 }

int main()
 {

    cout<<" ststic function"  <<endl;
       
    for (int i = 0; i < 10; i++)
    {
        stat_fun();
    }
    
    return 0;
 }
 */

//          Default argument
/*
# include<iostream>
using namespace std;

//default argument
float func(int h, float r = 0.5){
     float pie=3.14;
    return pie*(r*r)*h ;
}

int main()
 {
    int  height;
    float radius;
    cout<<"enter the radius"<<endl;
        cin>>radius;
        
        cout<<"enter the height"<<endl;
        cin>>height;
    
        // function using deafault value
        cout<<"function using default argument "<<endl;
        cout<<"The area of circle is :- "<<func(height)<<endl;
        
        cout<<"overwrite default argument "<<endl;
        cout<<"The area of circle is :- "<<func(height,radius)<<endl;

    return 0;
 }
 */

//         constant argument
# include<iostream>
using namespace std;

float fun_circle(int r, int h, const float pie=3.14){

return pie*r*r*h ;
}

int main()
 {
    int radius,height;
    cout<<"enter radius"<<endl;
    cin>>radius;
    
    cout<<"enter height"<<endl;
    cin>>height;
    cout<<"area of circle is :- "<<fun_circle(radius,height); 


    return 0;
 }