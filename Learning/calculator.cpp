//this is a simple calculator app in cpp 


#include <iostream>
using namespace std;


int main() {

    char userInput;
    int firstNum,secondNum;
    
    

    cout << " \n\t\t\t  Welcome to the calculatornator \n\n";
    cout << "Chose an operation: \n1. add\n2. subtract\n3. Multiply\n4. Divide \n\t\t:";        
    cin >> userInput;
    system("cls");

    cout << "Enter first number: ";
    cin >> firstNum;

    cout << "Enter second number: ";
    cin >> secondNum;

    if (userInput == '1')
    {
        cout << firstNum <<" + "<< secondNum << " = " << (firstNum + secondNum)<<endl ;
    }
    else if (userInput == '2')
    {
        cout << firstNum <<" - "<< secondNum << " = " <<  (firstNum - secondNum)<<endl ;
    }
    else if (userInput == '3')
    {
        cout << firstNum <<" X "<< secondNum << " = " <<  (firstNum * secondNum)<<endl ;
    }
    else if (userInput == '4')
    {
        cout << firstNum <<" / "<< secondNum << " = " <<  float(firstNum / secondNum)<<endl ;
    }
    else
    {
        cout << " \n\t\t\t  Invalid input please try again later \n\n";
    }

    return 0;
}



























