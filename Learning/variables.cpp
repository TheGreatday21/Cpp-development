
#include <iostream>

using namespace std;

int main(void)
{	
	//varibles in cpp are very similar to c 
	//but the difference is in cpp there is accountability for strings. They have their own data type 
	//and to add variable in our code we have to use the << symbol followed by the variable name 
	//this acts like somesort of stitch to join pieces of code together 
	
	string name = "Elijah";
	int age = 25;
	char grade = 'A';//the syntax is still the same as in c , we use single quotes to write single characters.

	cout << " There was once a man named  \n\t\t\t"<< name << endl;
	cout << " \t\tWhen he was "<< age <<" he loved to code." << endl;
	cout << " His collegues were also "<< age << endl;
	cout << " But there was just something about "<< name << endl;
	cout << "His average mark in class was usually : "<<grade<<endl;

	return 0;
}





