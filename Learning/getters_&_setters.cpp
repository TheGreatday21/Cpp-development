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

    Movie(string aTitle , string aDirector, string aRating){//creating a constructor 
        title = aTitle;
        director = aDirector;
        rating = aRating;
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            /* code */
        }
        
       // rating = aRating;//this means whenever we set the rating it has to go through this function and the only way to change the rating is using this function from main

    }
    
};

int main(void)
{
    Movie movie_1("Superman","James Gunn","PG-13");
    Movie movie_2("Astroid City ","Wes Anderson","PG-13");

    // cout<<movie_1.setRating<<endl;
    cout<<movie_2.title<<endl;

    return 0;
}
