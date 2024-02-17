                    // recursion and recursive approach 

// recursion for factorial
/*
# include<iostream>
using namespace std;


int rec_fun(int i){
if (i==1)
{
    return 1;
}
return i * rec_fun(i-1) ;
}

int main()
 {
    int fac;
    cout<<"enter the number"<<endl;
        cin>>fac;
    cout<<"Factorial of the "<<fac <<" is :- " <<rec_fun(fac)  <<endl;
       
        
    return 0;
 }
 */
// recursion for fibonachhi series

# include<iostream>
using namespace std;
 

int func_recusion(int x){
if (x==0){
    return 0;
}
else if ((x<2)){
    return 1;
}
return func_recusion(x-2) + func_recusion(x-1);
}
 
int main()
 {

    int x;
    cout<<" enter the value of x " <<endl;
    cin>>x;
    cout<<"The value of fabinachhi number is :-"<<func_recusion(x);
    return 0;
 }