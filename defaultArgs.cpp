#include <iostream>

using namespace std;

int sum(int, int);  // Declaration


int main()
{
	cout << sum(2, 3);
	return 0; 
}


int sum(int a, int b)   // Definition
{
	return a+b; 
}
