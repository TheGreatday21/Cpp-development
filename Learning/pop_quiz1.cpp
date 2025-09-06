
//PART A CONCEPT CHECKS
//whats the difference between a struct and a  class
/*
a struct is a way we can predict multiple instances of something . Its a good replacement for if else statements  while a class is creating a data type of our own where we can create objects with properties of that data type*/

/*
//what will this program output

#include <iostream>

using namespace std;

//creating a class called box
class Box{
    public:
        int length;//has one attribute of length
        Box(int l)
        {
            length = l;
        }//created a constructor 

        void print()
        {
            cout << "Length: " <<length<<endl;
        }//created a method  to print outthe length
};

int main()
{
    Box b1(10); //created an object b1 from the class Box
    Box b2(34);

    b2.length = 10; //changing the second object length to 10

    b1.print(); //calling the method from our class 
    b2.print();


    return 0;
}

####OUTPUT
PS D:\Elijah\languages_practice\C++\Learning\output> & .\'pop_quiz1.exe'
Length: 10
Length: 10

*/

//define a simple student class with attributes of name age , a constructor to set both and a method to display the details 
#include<iostream>
using namespace std;

class Student{
    string name;
    int age;

    public:
        Student(string aName,int aAge)
        {
            name = aName;
            age = aAge;
        }

        void printInfo()
        {
            cout<<"Student name: "<<name<<endl;
            cout<<"Student age: "<<age<<endl;
        }
};

int main()
{
    string userName;
    cout<<"What is your name:";
    cin>>userName;

    int userAge;
    cout<<"How old are you:";
    cin>>userAge;

    Student s1(userName,userAge);
    

    s1.printInfo();

    return 0;
}