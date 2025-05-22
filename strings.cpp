#include <iostream>

using namespace std;

int main(void)
{
	//strings are still arrays like we say in c 
	//iostream contains all the string functions inbuit so all we have to do is call them 

 	string sentence = " My name is kaizzi the great \n";
	cout <<sentence;

	//some of the common functions include .
	/*
	.length() -  to get the length of a string 
	.find() - to get a specific string in your variable . This function can be used by passing the string you want to find followed by the indent to start looking from 
	the return value is the index for where the string you are looking for starts 
	 .substr() - used to grab part of a string . This passes 2 arguments including the index to start, then the length of characters to grab after 
	 */


	 string sub = sentence.substr(12,7);
	 cout <<sub<<endl;
	 cout <<"The string variable sentence has a length of : "<< sentence.length()<<"\n"<<endl;
	 cout <<"The name Kaizzi in varible sentence starts at index :"<< sentence.find("kaizzi",0)<<"\n" <<endl;
	return 0;
}


