//calculator using switch case

# include<iostream>
using namespace std;

int main()
{
    int a,b;
    int choose ;
    cout<<"choose any expression \n 1 :- + \n 2 :- - \n 3 :- * \n 4 :- /  "<<endl;
    cin>> choose;  
    
    cout<<"enter the 1st number";
        cin>>a;
        
        cout<<"enter the 2nd number";
        cin>>b;
    switch (choose)
    {
    case 1 :
        cout<<" Sum of two number is"<<a+b<<endl;
        break;
    case 2 :
        cout<<" Subtract of two number is :- "<<a-b <<endl;
        break;
    case 3 :
        cout<<" Multiplication of two numbeof two number is :- "<<a*b <<endl;
        break;
    
    case 4 :
        cout<<" Division of two number is :- "<<a/b <<endl;
        break;    
    default:
        cout<<"please enter valid number"<<endl;
        break;
    }
       
    return 0;

}