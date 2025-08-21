//this is a lesson about inheritance of classes 

#include <iostream>
using namespace std;

//SUPER CLASS 
class Chef
{
protected:
    string chefName;
public:
    void makesSteak()
    {
        cout << "The chef has made steak "<<endl;
    }
      void makesDessert()
    {
        cout << "The chef has made dessert"<<endl;
    }
      void makesSalad()
    {
        cout << "The chef has made salad "<<endl;
    }
    void makesSpecialDish()
    {
        cout << "The chef has made Zanzibar Grilled fish  "<<endl;
    }
};


//SUBCLASS
//creating another class that does whatever the first class can do plus other staff. We use inheritance here 
class ItalianChef:public Chef//this is the inheriatnce syntax 
{
public:
    void makesPizza()//this function will now be exclusive to the italian chef 
    {
        cout << "The chef has made pizza "<<endl;
    }
    //we can also overide a function being inherited
    void makesSpecialDish()
    {
        cout << "The chef has made Brazillian flaming turtle "<<endl;
    }

    //we can use the set and get to get to use a protected attribute from our mother class 
    void setName(string aName)
    {
        chefName = aName;
    }

    string getName()
    {
        return chefName;
    }
};

int main(void)
{

    Chef chef1;//chef1 is the 1st object of the chef class 
    chef1.makesDessert();

    ItalianChef italianChef1;//making an object from the class with inheritance
    italianChef1.makesSteak();//its able to use the function as well 

    italianChef1.makesPizza();

    //here both have the same function but different output cause the subclass overides the inherrited function from the super class 
    chef1.makesSpecialDish();
    italianChef1.makesSpecialDish();

    italianChef1.setName("Micheal B Jordan");
    cout<<"The chef's name is "<<italianChef1.getName();

    return 0;
}


//there is also another specifier for a class called PROTECTED that allows you to use a private method in a subclass but not outside . Basically its a private that can be inherited 





































































