// Array of object and passing object as a function argument

// array of object

// #include <iostream>
// #include <string>
// using namespace std;
// class Student
// {
//    int id;
//    string name;
//    int roll_no;
//    static int count;
   
// public:
//    static void marking()
//    {
//       count++;
//       cout << "This is Student " << count << " details..." << endl;
//    }
//    void set();
//    void display();
// };
// int Student ::count;

// void Student ::set()
// {
//    cout << "Enter the name" << endl;
//    cin >> name;

//    cout << "Enter the id" << endl;
//    cin >> id;

//    cout << "Enter the Roll Number" << endl;
//    cin >> roll_no;
// }
// void Student ::display()
// {
//    cout << "The Name of the student is :- \t\t" << name << endl;
//    cout << "The Roll Number of student is :-\t" << roll_no << endl;
//    cout << "The Registration id of student is :-\t" << id << endl;
// }
// int main()
// {
//    Student s[100];
//    int x;
//    cout << "Enter the number of student you want to register details..." << endl;
//    cin >> x;
//    for (int i = 0; i < x; i++)
//    {
//       s[i].set();
//    }
//    cout<<endl;
//    cout << "Displaying Details of All the Students " << endl;
//    cout<<endl;
//    for (int i = 0; i < x; i++)
//    {
//       Student ::marking();
//       s[i].display();
//       cout<<endl;
//    }
//    return 0;
// }


// passing object as a function argument

#include <iostream>
#include <string>
using namespace std;
class complex
{
private:
   int num1;
   int num2;
   static int count;

public:
   void set(int a, int b)
   {
      num1 = a;
      num2 = b;
   }
   void get_det()
   {
      int v1, v2;
      cout<<endl;
      cout << "\t\t\tObject " << count << " details" << endl;
      cout << "enter the 1st number" << endl;
      cin >> v1;

      cout << "enter the 2nd number " << endl;
      cin >> v2;

      count++;
      set(v1, v2);
   }
   void print_data()
   {
      cout << "The complex number is " << num1 << " + " << num2 << "i" << endl;
   }
   void set_complex(complex o1, complex o2)
   {
      num1 = o1.num1 + o2.num1;
      num2 = o1.num2 + o2.num2;
      cout<<"\t\tThe sum of two complex number is :-"<<endl;
      print_data();
   }
};
int complex ::count = 1;
int main()
{
   complex obj1, obj2, obj3;
   obj1.get_det();
   obj1.print_data();

   obj2.get_det();
   obj2.print_data();

   obj3.set_complex(obj1, obj2);
   // obj3.print_data();

   return 0;
}