//these are the same as in c 
//every element inside the array is another array 

#include <iostream>
using namespace std;

int main()
{
    //first [] - total elements /arrays in the array 
    //second [] - how many elements are in each array in the array
    int numGrid[][2] = {
        {1,2},
        {3,4},
        {5,6},
        {7,8}
    };
    //this is a 2d array were the number of arrays in the array is not specified but each array has 2 elements in it 


    cout <<numGrid[0][1]<<endl;//getting the number at index postion 1 of the first array 0 which in this case is 2

    //the dimensions of arrays can grow from 2 to over 5 arrays depending on the level of complexity you are looking for 

    //using a nested for loop to loop through the 2s array and print all the elements in the array 

    int size = sizeof(numGrid)/sizeof(numGrid[0]);
    int width = sizeof(numGrid[0])/sizeof(numGrid[0][0]);

    for(int i = 0 ; i < size  ; i++)
    {
        cout<<"{";
        for (int j = 0; j < width ; j++)
        {
            cout <<numGrid[i][j];
            cout<<",";  
        }
        cout<<"}\n";
    }

    return 0;
}