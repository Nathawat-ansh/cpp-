//                                             function overloading 

// overload a function with different ways 

// 1.same name but different datatype
/*
# include<iostream>
using namespace std;

// same name but different datatype
float func(int a ,int b ){
    return a*b;
}
float func(float a, float b ){
    return a*b;
}
int main()
 {
    int x,y,z;
    float num1, num2;
    cout<<"enter the 1st number (int type)"<<endl;
    cin>>x;
    cout<<"enter the 2nd number (int type)"<<endl;
    cin>>y;    
    // cout<<"enter the 3rd number (int type)"<<endl;
    // cin>>z;
    cout<<"enter the 1st number (float type) "<<endl;
    cin>>num1;
    cout<<"enter the 2nd number (float datatype) "<<endl;
    cin>>num2;
    //function overloading (different datatype)        
    cout<<"inter datatype  "<<func(x,y)  <<endl;
    cout<<"float datatype "<<func(num1,num2)  <<endl;
    return 0;
 }
*/


// 2. same name but different number of datatype
/*
# include<iostream>
using namespace std;

//same name but different number of datatype
int func(int a,int b){
    return a+b;
}
int func(int a ,int b , int c){
    return a+b+c;
}

int main()
 {
    int x,y,z;
    cout<<"Enter the 1st number"<<endl;
    cin>>x;
        
    cout<<"Enter the 2nd number"<<endl;
    cin>>y;

    cout<<"Enter the 3rd number :- " <<endl;
    cin>>z;
    // overload a function with dinnerent number of parameter
    cout<<"function with 2 parameter "<<func(x,y) <<endl;
    cout<<"function with 3 parameter "<<func(x,y,z) <<endl;
         
    return 0;
 }
*/


// 3. same name but diiferent parameters


//  same name but diiferent parameters
# include<iostream>
using namespace std;

float func(int a ,float b){
    return a*b;
}
float func(float b, int a ){
    return a*b;
}
int main()
 {
    int num1;
    float num2;
    cout<<"enter the 1st number (int)"<<endl;
        cin>>num1;
        
        cout<<"enter the 2nd number (float)"<<endl;
        cin>>num2;
    // different paramater 
    cout<<"sequence (int, float) "<< func(num1, num2) <<endl;
    cout<<"sequence (float , int) "<< func(num1, num2) <<endl;
       
    return 0;
 }