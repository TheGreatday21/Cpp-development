/*
Build a fully 	functional Tip Calculator application in C++ that calculates
the tip amount for a given bill. Hint: Use the “double” data type.
Get the user’s bill, then calculate and display their tip amount and total bill (bill including tip).
*/

#include <iostream>
using namespace std;

int main(void)
{
    double bill = 0,tip = 0, totalAmount = 0;
    int userInput;

    cout<< "Enter your bill amount here: ";
    cin>>bill;
    system("cls");

    cout <<"How big of a tip are you offering to the waiter: (\n1. 10%\n2: 15%\n3: 20%\n) : ";
    cin>>userInput;

    switch (userInput)//these are the same as in c 
    {
        case 1:
            tip = (0.1 * bill);
        break;
        case 2:
            tip = (0.15 * bill);
        break;
        case 3:
            tip = (0.2 * bill);
        break;
        default:
            cout<<"Try again. The number you have entered is incorrect . "<<endl;
        break;
    }

    totalAmount = bill + tip;
    cout<<"The tip amount is "<<tip<<endl;
    cout << "Your total bill including the tip is "<<totalAmount<<endl;

  
}
















































