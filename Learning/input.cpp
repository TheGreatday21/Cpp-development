#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
    int age;
    cout << "What is your age ? " << endl;
    cin>>age;
    //in this case we use "cin " and the brackets change to the other direction 
    cout <<"You are " << age << " years old "<< endl;
//-------This also applies to getting a character, float and double 

    //the criteria for getting a string is also the same here unlike in c just that we have a dedicated data type to strings here 
    string name ;
    cout << "What is your name? ";
    cin >>name;

    cout <<"You are called "<<name<<endl; 
  

    return 0;
}