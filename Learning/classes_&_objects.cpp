//this is about classes and objects in cpp 
//theses are structs in c . its the same thing just abit fancier lol

#include <iostream>
using namespace std;

//classes are mainly named with capitalisation at the start 
class Book
{
    //we give this book data type attributes 
public:
    string title ;
    string author;
    int pages;
private:
//here we place the code we donot need to show the end user 
};

class Student //a class with a constructor 
{
public:
    string name;
    int age;
    Student(string studentID){//it can also take arguments/params
        //this wll be called whenever we create a student object 
        cout <<"Created a new student object for user " <<studentID<<endl;
    }//theses constructors help us to reduce the stress of manually placing in the objects information 

};




int main(void)
{
    //this is like creating our own data types 
    //CLASSES - this is like creating a new type of data in our program .Its the blue print of a book inside our program 
    //OBJECT - this is an item created based on a class.Its an actual instance of the specification 
    //CONSTRUCTOR - special function called whenever we create an object of a class 
    
    Book book1;//creating an object from book class called book1
    book1.title = "Atomic Habbits";
    book1.author = "James Clear";
    book1.pages = 630;

    cout << book1.title<<endl;
    cout << book1.author<<endl;

    Book book2;//creating an object from book class called book1
    book2.title = "Harry Potter";
    book2.author = "Jk Rolling ";
    book2.pages = 1020;

    
    cout << book2.title<<endl;
    cout << book2.author<<endl;

    Student student1("b29155");
    student1.name = "Kaloli Samino";
    student1.age = 24;

    cout << student1.name<<endl;
    cout << student1.age<<endl;




    return 0;
}















