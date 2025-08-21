//this is a program that takes a number from the user as input and returns a number corresponding to that day of the week
//just shows the use of a switch statement 

#include <iostream>
using namespace std;


string dayOfTheWeek(int dayNum);//this is still possible in cpp also 

int main()
{
    int userInput;

    cout<<"Enter a number corresponding to the day you want (0 - sunday ...) :"<<endl;
    cin>>userInput;

    dayOfTheWeek(userInput);
    return 0;
}   

//creating a function that gets the day from a user 
string dayOfTheWeek(int dayNum)
{
    switch(dayNum)
    {
        case 0:
            cout<< "The day of the week is Sunday "<<endl;
        break;
        case 1:
            cout<< "The day of the week is Monday "<<endl;
        break;
        case 2:
            cout<< "The day of the week is Tuesday "<<endl;
        break;
        case 3:
            cout<< "The day of the week is Wednesday "<<endl;
        break;
        case 4:
            cout<< "The day of the week is Thursday "<<endl;
        break;
        case 5:
            cout<< "The day of the week is Friday "<<endl;
        break;
        case 6:
            cout<< "The day of the week is Saturday "<<endl;
        break;
        default:
            cout<< "That number doesnot correspond to any day of the week according to the comp calendar"<<endl;
        break;
    }  
}

















































