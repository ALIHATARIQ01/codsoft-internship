// internship work task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
 
#include <iostream>
using namespace std;
template <class T>
class calculator 
{
private:

public:
    template <typename T>
    T add(T a, T b) 
    {
        return a + b;
    }
    template <typename T>
    T subtract(T a, T b) {
        return a - b;
    }

    template <typename T>
    T multiply(T a, T b) 
    {
        return a * b;
    }
    template <typename T>
    T divide(T a, T b)
    {
        if (b == 0)
        {
            cout << "Error division by zero" << endl;
            return 0;
        }
        else
        {
            return a / b;
        }
    }
};
 
int main()
{
    char tocontinue;
    do{
    char opr;
    cout << "\t\t\t\t\tWELLCOME\n\n";
    cout << "\tHere is the calculator that perform the arthematic operation for the different data type________\n ";
    cout << "\t\t\tSelect the data type in which you want to perform the task:\n" << endl;
    cout << "1. int\n2. double\n3. float\n" << endl;

    int choice;
    cin >> choice;

   
    cout << "\t\tEnter the operation (+, -, *, /): ";
    cin >> opr;


    calculator<int> intCalculator;
    calculator<double> doubleCalculator;
    calculator<float> floatCalculator;

    switch (choice)
    {
    case 1:
    {
        int result;
        int operand1, operand2;
        cout << "\n\t\tEnter the operend1____________ \n";
        cin >> operand1;
        cout << "\t\tEnter the operend2____________ \n";
        cin >> operand2;
        switch (opr)
        {
        case '+':
            result = intCalculator.add(operand1, operand2);
            break;
        case '-':
            result = intCalculator.subtract(operand1, operand2);
            break;
        case '*':
            result = intCalculator.multiply(operand1, operand2);
            break;
        case '/':
            result = intCalculator.divide(operand1, operand2);
            break;
        default:
            cout << "Invalid operation choice." << endl;
            return 1;
        }
        cout << "Result: " << result << endl;
        break;
    }
    case 2:
    {
        double result;
        double operand1, operand2;
        cout << "\n\t\tEnter the operend1____________ \n";
        cin >> operand1;
        cout << "\t\tEnter the operend2____________ \n";
        cin >> operand2;
        switch (opr)
        {
        case '+':
            result = doubleCalculator.add(operand1, operand2);
            break;
        case '-':
            result = doubleCalculator.subtract(operand1, operand2);
            break;
        case '*':
            result = doubleCalculator.multiply(operand1, operand2);
            break;
        case '/':
            result = doubleCalculator.divide(operand1, operand2);
            break;
        default:
            cout << "Invalid operation choice." << endl;
            return 1;
        }
        cout << "Result: " << result << endl;
        break;
    }
    case 3:
    {
        float result;
        float operand1, operand2;
        cout << "\n\t\tEnter the operend1____________ \n";
        cin >> operand1;
        cout << "\t\tEnter the operend2____________ \n";
        cin >> operand2;
        switch (opr)
        {
        case '+':
            result = floatCalculator.add(operand1, operand2);
            break;
        case '-':
            result = floatCalculator.subtract(operand1, operand2);
            break;
        case '*':
            result = floatCalculator.multiply(operand1, operand2);
            break;
        case '/':
            result = floatCalculator.divide(operand1, operand2);
            break;
        default:
            cout << "Invalid operation choice." << endl;
            return 1;
        }
        cout << "Result: " << result << endl;
        break;
    }
    default:
        cout << "Invalid data type choice." << endl;
        return 1;
    }
    cout << "DO YOU WANT TO CONTINUE THIS PROGARM.................(Y/N)";
    cin >> tocontinue;
    } while (tocontinue == 'Y' || tocontinue == 'y');
    return 0;
}

  


 

