#include <iostream>

using namespace std;
/* 
    returnType identifier() 
    { function body}
    return value;
*/
long double getFirstValue() //get user input values
{
    cout << "enter the number '\n";
    long double num1;
    cin >> num1;
    return num1;
}

long double getSecondValue()
{
    cout << "enter the 2nd number '\n";
    long double num2;
    cin >> num2;
    return num2;
} 

long double add()  // addition
{
    long double num1; // because the variable only exists in the function so i can use the same identifier multiple times in different functions.
    num1 = getFirstValue();

    long double num2;
    num2 = getSecondValue();

    long double sum;
    sum = num1 + num2;
    return sum;   
}

long double subtract()  // subtract
{
    long double num1;
    num1 = getFirstValue();

    long double num2;
    num2 = getSecondValue();

    long double subtract;
    subtract = num1 - num2;
    return subtract;
}

long double multiply()  // multiply
{
    long double num1; 
    num1 = getFirstValue();

    long double num2;
    num2 = getSecondValue();

    long double multiply;
    multiply = num1 * num2;
    return multiply;
}

long double divide()  // division
{
    long double num1; 
    num1 = getFirstValue();

    long double num2;
    num2 { getSecondValue() };

    long double divide;
    divide = num1/num2;
    return divide;
}

int main() 
{
    cout << "what kind of simple mathematics calulation do you want to perform? " << endl;
    char operation;
    cin >> operation;

    if(operation == '+') {
        cout << add();
    }
    else if(operation == '-') {
        cout << subtract();
    }
    else if(operation == '*') {
        cout << multiply();
    }
    else if(operation == '/') {
        cout << divide();
    } 
    else {
        cout << "please put the correct operator. '\n'";
    }
    return 0;
}


    