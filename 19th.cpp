// member function and data members 
# include<iostream>
# include<string>
using namespace std;

class Mca
{
    // data members 
    private:
        string registration_no;
        string contacts;
    public:
        string name;
        string dob;
        int roll_no;
    //member function
    // outside the class 
    
    
    void setdata(string a, string b);
    
    // inside the class 
    void get_data()
    {
    cout<<"Name :- "<< name <<endl;
    cout<<"Registration Number :- "<<registration_no <<endl;
    cout<<"Roll Number :- "<<roll_no <<endl;
    cout<<"Contacts :- "<<contacts<<endl;
    cout<<"Date of birth :- "<<dob <<endl;
    }
};
// member function access outside the class 
void Mca :: setdata(string a, string b){
registration_no=a;
contacts=b;
}

int main()
 {

    Mca ansh;
    ansh.name="lucifer";
    ansh.dob="25-12-1999";
    ansh.name=3;
    ansh.setdata("34118411123 ", "6350571497");
    ansh.get_data();
    return 0;
 }