//this is about object function in cpp 


#include <iostream>
using namespace std;

//creating a class for students 
class Student 
{
public:
    string name;
    int age;
    string studentId;
    double cgpa;

    Student(string aName, int aAge, string aStudentId,double aCgpa){//creating an object function / constructor 
        name = aName;
        age = aAge;
        studentId = aStudentId;
        cgpa = aCgpa;
    }

    //creating a function to tell us whether a student is on th honor roll
    bool hasHonors()//function with a return value is different from a constructor for class above in syntax 
    {
        if (cgpa >= 4.5)
        {
            cout<<"Yes\n";
            return true;//the code will only execute if this is true 
        }
        return false;
    }
};

int main(void)
{

    Student student1("Elijah", 23,"B29158",4.58);
    Student student2("Jansen", 21,"B22348",4.78);
    Student student3("Muloochi", 25,"B26438",4.08);

    cout<<student1.hasHonors()<<endl;
    cout<<student3.hasHonors()<<endl;
//so now we can scan through the objects with specific criteria we can check for 





    return 0;
}
























