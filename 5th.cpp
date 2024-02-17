// operaotrs in cpp

# include<iostream>
using namespace std;

int main()
{
//     int x,y;
    
//     cout<<"enter the 1st number\n";
//     cin>>x;
        
//     cout<<"enter the 2nd number\n";
//     cin>>y;
//     cout<<"\t\t\t\t ARITHMETIC OPERATOR \n";

// // arithmetic operator
//     cout<<"Addition:- \t\t\t\t"<<x+y<<endl;    
//     cout<<"Subtraction:- \t\t\t\t"<<x-y<<endl;    
//     cout<<"Multiplication:- \t\t\t"<<x*y<<endl;    
//     cout<<"Division:- \t\t\t\t"<<x/y<<endl;    
//     cout<<"Modulus:- \t\t\t\t"<<x%y<<endl;    
//     cout<<"Increment first then print:- \t\t"<<++x<<endl;    
//     cout<<"Print value then Increment:- \t\t"<<x++<<endl;     
//     cout<<"Decrement first then print value:- \t"<<--x<<endl;    
//     cout<<"Print value then Decrement:- \t\t"<<x--<<endl;    
//     return 0;

  cout<<"\t\t\t ASSIGNMENT OPERATOR"<<endl;
   
// Assignment operator    
   int z=2;

   cout<<"z=7 \t\t"<<(z=7)<<endl;
   cout<<"z=z+5 \t\t"<<(z+=5)<<endl;
   cout<<"z=z-5 \t\t"<<(z-=5)<<endl;
   cout<<"z=z*5 \t\t"<<(z*=5)<<endl;
   cout<<"z=z/5 \t\t"<<(z/=5)<<endl;
   cout<<"z=z%5 \t\t"<<(z%=5)<<endl;
   cout<<"z=z&5 \t\t"<<(z&=5)<<endl;
   cout<<"z=z|5 \t\t"<<(z|=5)<<endl;
   cout<<"z=z^5 \t\t"<<(z^=5)<<endl;

// Comparision operator
cout<<"\t\t\t COMPARISION OPERATOR"<<endl;
  
   cout<<"Equals to \t\t"<<(z==7)<<endl;
   cout<<"Not Equals to \t\t"<<(z!=5)<<endl;
   cout<<"Greater than \t\t"<<(z>5)<<endl;
   cout<<"Smaller than \t\t"<<(z<5)<<endl;
   cout<<"Greater than equals to \t\t"<<(z>=5)<<endl;
   cout<<"Less than equals to \t\t"<<(z<=5)<<endl;


// Logical operator
cout<<"\t\t\t LOGICAL OPERATOR"<<endl;
  
   cout<<"Logical AND \t\t"<<(z<5&&z<10)<<endl;
   cout<<"Logical OR \t\t"<<(z>1||z>5)<<endl;
   cout<<"Logical NOT \t\t"<<(!(z<6 &&z<16))<<endl;
   
}