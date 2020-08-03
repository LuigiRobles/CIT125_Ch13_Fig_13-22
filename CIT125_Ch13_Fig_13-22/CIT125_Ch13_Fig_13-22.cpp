// CIT125 Intro to C++ Luigi Robles
// 08-02-2020 Summer Term
// Ch.13 pg.487 Fig.13-22 SSN Program
// Displays Social Security # with Hypens

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ssn = ""; //declare and initialize variable
	cout << "Nine-character Social Security number: ";
	getline(cin, ssn); //input for ssn

	if (ssn.length() == 9)
	{
		//insert hypens
		ssn.insert(3, "-"); //xxx-xxxxxx
		ssn.insert(6, "-"); //xxx-xx-xxxx
		cout << "Social Security number: " << ssn << endl; //output ssn with hypens
	}
	else
		cout << "The number must contain 9 characters" << endl;
	//end if
	return 0;
} //end of main function
