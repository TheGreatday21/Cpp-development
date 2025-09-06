#include <iostream>
using namespace std;



//creating a class for movies
class Movie
{
    //getters and setters prevent input of data into an object we donot want 
    ///we use the private key word and anything placed in it will be private (you wont have access to it in the main funnction but in the constructor you can cause they are in the same class )
private:
    string rating;

public:
    string title;
    string director;

    Movie(string aTitle , string aDirector, string aRating){ //creating a constructor 
        title = aTitle;
        director = aDirector;
        rating = aRating;
    }
    //this is a setter method 
    void setRating(string aRating)//the rating can only be changed if wee use this function cause its in the public of the class 
    {
        if (aRating == "G" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;//cause the user has entered a valid rating    
        }
        else
        {
            rating = "NR";//not rated
        }
        
       // rating = aRating;//this means whenever we set the rating it has to go through this function and the only way to change the rating is using this function from main
    }
    
    //this is a getter  method 
    string getRating() {//this is a function created that enables us to get the rating from the private even though its inaccessible but the integrity is still maintained 
        return rating;
    }
};

int main(void)
{
    Movie movie_1("Superman","James Gunn","PG-13");
    Movie movie_2("Astroid City ","Wes Anderson","PG-13");

    //incase i want to change the rating of the first movie i have to use the function i set up and if the param is not what i specified it should just place the rating as NR

    cout<<movie_1.title<<endl;
    cout<<movie_2.title<<endl;

    movie_1.setRating("LIKKE");///trying to set it with a different rating but it out to return NR cause what i placed in is not in the options i put 
    movie_1.setRating("R");//This will reflect cause its part of the ones i specified in the function 

    cout<<movie_1.getRating()<<endl;//called the getter method to see the private attribute of rating 
    cout<<movie_2.getRating()<<endl;
    

    return 0;
}
