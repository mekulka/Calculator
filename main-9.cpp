/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

int main()
{

int num1, num2, selection;

cout << "Enter First Integer: ";
cin >> num1;

cout << "Enter Second Integer: ";
cin >> num2;

cout << "\n\n\n";

cout << "Select the desired function:\n";
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Division\n";
cout << "Selection: ";
cin >> selection;

cout << "\n\n\n";

switch(selection)
{
case 1:
cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << endl;
break;
case 2:
cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2 << endl;
break;
case 3:
cout << "The product of " << num1 << " and " << num2 << " is " << num1*num2 << endl;
break;
case 4:
cout << "The quotient of " << num1 << " and " << num2 << " is " << num1/num2 << endl;
break;
default:
cout << "Invalid selection\n";
}
return 0;
}
