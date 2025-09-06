//these are the same as in c 


#include <iostream>
using namespace std;
//pointers are variables that store the addresses of a specific data type variable ie integer pointers store addresses of integer variabbles 

int main(void)
{

    int num1 = 10 , num2 = 40 ;
    int  *p,*p1; //we have created 2 integer pointers 

    p = &num1;//p points to the address of num1
    p1 = &num2;//p1 points to the address of num2

    //to get what is being stored at the address the pointer is pointing to we use dereferencing 

    cout << "The value stored at the address p is pointing to is the same value in the integer num1\n"<<endl;
    cout << *p << " : pointer value"<<endl;//here we dereferenced the pointer 
    cout << num1 <<" : Actual value from variable "<<endl;

    //so the big deal about pointers is that they really help us save memory especially when working on big projects that will use memory in very many different places at the same time 

    //unlike in c , here we donot neccessarily use the malloc and realloc feature 

    //the best use cases is the example of using them in a function that carries out a bubble sort algorithm 


    return 0;

}