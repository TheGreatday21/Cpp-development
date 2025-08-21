//this is the same criterial like in c 
//whole numbers = int
//decimal numbers = float / double(long decimal number)


//the operators are also the same
/*

+ = addition
- = subtraction
/ = division
% = modulous

*/

#include <cmath>
#include <iostream>

using namespace std;

int main(void){
    int  wholeNum = 23;
    float decimalNum = 5.5;

    cout << wholeNum + decimalNum << " Addition" << endl;
    cout << wholeNum - decimalNum << " Subtraction" <<endl;
    cout << wholeNum / decimalNum << " Division" << endl;
    //float divided by a whole num gives a float 
    cout << (wholeNum % 2) << " Modulus" << endl;

}

//  Inorder to use math function in your file you have to import the cmath library at the beginning of your aplication 
/*
some functions include 

pow() - pow(number,toThePower) - gets the power of a given number
sqrt() - gets the square root 
round() - rounds numbers 
ceil() - rounds the number up to the next highest 
floor() - rounds down to the lower number 
fmax() - takes 2 args and deteremines the bigger number between them 
fmin() - takes 2 args and determines the smaller of the numbers 

*/
