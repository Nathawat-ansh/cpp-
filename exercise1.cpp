#include <math.h>
#include <iostream>
#include <string>
using namespace std;
class SimpleCalculator
{
protected:
    int num1;
    int num2;
public:
    void calculate()
    {
        string choose;
        cout << "Choose what operation you want to perform:-" << endl;
        cout << "1. Add        press :- (+) " << endl;
        cout << "2. Subtract   press :- (-) " << endl;
        cout << "3. Multiply   press :- (*) " << endl;
        cout << "4. Divide     press :- (/) " << endl;
        cin >> choose;

        if (choose == "+")
        {
            cout << "Addiiton of Two Number is :-" << (num1 + num2) << endl;
        }
        else if (choose == "-")
        {
            cout << "Subtraction of Two Number is :-" << (num1 - num2) << endl;
        }
        else if (choose == "*")
        {
            cout << "Multiplication of Two Number is :-" << (num1 * num2) << endl;
        }
        else
        {
            cout << "Division of Two Number is :-" << (num1 / num2) << endl;
        }
    }
};
class ScientificCalculator
{
protected:
    int num_1;
    int num_2;

public:
    ScienticCalculator() {}
    void scienticCalc()
    {
        string choose1;
        cout << "Choose Scientic Operation " << endl;
        cout << "1. modulus " << endl;
        cout << "2. power " << endl;
        cout << "3. or " << endl;
        cout << "3. and " << endl;
        cin >> choose1;
        if (choose1 == "modulus")
        {
            cout << "Modulus of Two number is " << num_1 % num_2 << endl;
        }
        if (choose1 == "power")
        {
            cout << "Power of the number is " << pow(num_1, num_2) << endl;
        }
        else if (choose1 == "and")
        {
            if ((num_1 > 50) and (num_1 < 100))
            {
                cout << "Number 1 is lie in between 50 to 100  " << endl;
            }
            else if (num_1 > 100)
            {
                cout << "Number id larger than 100" << endl;
            }
            else
            {
                cout << "Smaller number" << endl;
            }
        }
        else
        {
            cout << "Numebr is OR Number" << endl;
        }
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    HybridCalculator(int a, int b)
    {
        num1 = a;
        num2 = b;
        num_1 = a;
        num_2 = b;
    }
    void display()
    {
        calculate();
        scienticCalc();
    }
};
int main()
{
    int number1, number2;
    cout << "enter the 1st number" << endl;
    cin >> number1;

    cout << "enter the 2nd number" << endl;
    cin >> number2;
    HybridCalculator h1(number1, number2);
    h1.display();

    return 0;
}