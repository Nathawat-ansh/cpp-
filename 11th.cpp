// pointers 

# include<iostream>
using namespace std;

int main()
 {
                     // access value and adreess using pointer 
    int x=45;
    int* y= &x;
    //address
    cout<<"The address of x is :- "<< &x <<endl;
    cout<<"The address of x using pointer :- "<< y <<endl;
    // value
    cout<<"The value of  x is :-"<<x<<endl;
    cout<<"The value of  x using pointer :-"<<*y<<endl;
    
    int z=89;
    y=&z;
    //address
    cout<<"address of z is "<< &z <<endl;
    cout<<"address of z using pointer "<< y <<endl;
   
   // value 
   cout<<"value of z is "<< z <<endl;
   cout<<"value of z using pointer "<< *y <<endl;
      

                     // pointer to pointer 
   
    int** a=&y;
   //  address 
   cout<<"address of pointer y is :- "<< &y <<endl;
   cout<<"address of pointer y using pointer :- "<< z <<endl;
   // value    
   cout<<"value of the pointer y is :-"<<y<<endl; //"y" doesnt store any value it store the address of "z"
   cout<<"value of the pointer y is :-"<<**a<<endl; //"a" is a pointer which point the address of pointer y (which store the address of z ), so z value is appear, 
   
   //  address of all three variables
cout<<"address of x is "<< &x <<endl;
cout<<"address of y is "<< &y <<endl;
cout<<"address of z is "<< &z <<endl;
   
    
    
    return 0;
 }