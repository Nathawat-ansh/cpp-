                    // reference variable and typing casting

# include<iostream>
using namespace std;
// refernce variable

// int main()
// {
//     cout<<"\t\t\t\t REFERENCE VARIABLE";
//     int x;
//     int & ref=x;
//     ref=56;
//     // cout<<"enter the value of reference variable:-\n";
//     // cin>>ref;
//     cout<<"value of x is :- \n"<<ref<<endl;
//     // cin>>;  
//     return 0;

// }


// typecasting    
int main(int argc, char const *argv[])
{
    cout<<"\t\t TYPE_CASTING"<<endl;
    int a=45;
    float b= 56.5;
    // typecating has two ways 
    cout<<"typecasting of a is :- "<< (float)a <<endl;
    cout<<"typecasting of a is :- "<< float(a) <<endl;
          
    cout<<"typecasting of a is :- "<< (int)b <<endl;
    cout<<"typecasting of a is :- "<< int(b) <<endl;
    return 0;

}
