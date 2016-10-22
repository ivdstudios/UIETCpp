#include <iostream>

using namespace std;

string name = "Abhimanyu Aryan";
char newName[6] = "Hello";


string& n = name;

string *ptrToString = &name;


int main()
{
	cout << ptrToString << endl;
	cout << *ptrToString << endl;
	cout << name << endl;
	cout << newName << endl;
	cout << n << endl;
	return 0; 
}
