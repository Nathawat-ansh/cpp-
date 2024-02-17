//structure , union and enums

                                    // structure 
/*
# include<iostream>
using namespace std;
 struct rst
{
    int roll_no;        //members of structure 
    float height;
    char name;
} ;

int main()
 {
    
// creating object of structure
    struct rst obj1;
    obj1.name='a';
    obj1.roll_no=10;
    obj1.height=5.9;
// printing value using object 
    cout<<"the name is :- "<<obj1.name<<endl;
    cout<<"the roll number is :- "<<obj1.roll_no<<endl;
    cout<<"the height is :- "<<obj1.height<<endl;

     return 0;
    }
 */   

/*
 //  directly using structure name    
    
# include<string>
# include<iostream>
using namespace std;
struct
{
    
    string brand;
    int year;
    float price;

} model1,model2;


int main()
 {
    // model1
    model1.brand="audi";
    model1.price=1299999.000;
    model1.year=1999;

    cout<<"The name of the model 1 is :-  "<<model1.brand  <<endl;
    cout<<"The year of the model 1 is :-  "<<model1.year  <<endl;
    cout<<"The price of the model 1 is :-  "<<model1.price  <<endl;
       
    // model2   
    model2.brand="asuton martin";
    model2.price=100000000.34;
    model2.year=1972;
    
    cout<<"The name of the model 1 is :-  "<<model2.brand  <<endl;
    cout<<"The year of the model 1 is :-  "<<model2.year  <<endl;
    cout<<"The price of the model 1 is :- "<<model2.price  <<endl;
    

    return 0;
 }
*/


                                        // union 

/*
# include<iostream>
using namespace std;
 
typedef union test
 {
    int age;
    char fav_letter;
    float height;

 } tst;
 

int main()
 {
    tst t ;
    t.age=23;
    cout<<"age is  "<<t.age <<endl;
       
    t.height=5.9;
    cout<<"height is "<<t.height  <<endl;
       
    t.fav_letter='a';
    cout<<"favorite letter "<<t.fav_letter  <<endl;
       
cout<<"check for the garbage value "  <<endl;
   
   cout<<"age is :- "<<t.age <<endl;
   cout<<"height is :- "<<t.height  <<endl;
   cout<<"favorite letter is :-  "<<t.fav_letter  <<endl;

return 0; 
    
 }

*/

                                        // enums

# include<iostream>
using namespace std;
 
typedef enum fruits{
    mango,
    banana, apple, chiku , papita, orange , bheel
} ft;

int main()
 {
     ft num1,num2,num3;
     num1= mango;
     num2= bheel;
     num3= papita;

     cout<<" mango is at "<<num1  <<endl;
     cout<<" bheel is at "<<num2  <<endl;
     cout<<" papita is at "<<num3  <<endl;
        


    return 0;
 }

