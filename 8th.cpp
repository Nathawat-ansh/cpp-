# include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    
    // if else condition
    /*if (age < 18)
        {
        cout<<"you are too young"<<endl;       
        }

    else
        {
        cout<<"you are eligible to join our party"<<endl;   
        }
    */
    // if else ladder 
    if (age < 18)
        {
        cout<<"you are too young"<<endl;       
        }
    else if (age == 18)
    {
        cout<<"you can join only ehan you have id proofs "<<endl;
    }
    
    else
        {
        cout<<"you are eligible to join our party"<<endl;   
        }
    
        

        // switch case

        switch (age)
        {
        case 18:
            cout<<"you can vote"<<endl;
            break;
        case 25:
            cout<<"you get a job"<<endl;
            break;
        default:
            cout<<"you can't vote "<<endl;
            break;
        }
      
    return 0;

}